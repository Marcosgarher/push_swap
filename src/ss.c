/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:22:35 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/18 14:03:19 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ss(t_list **sta, t_list **stb)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	first = sta[0];
	second = sta[0]->next;
	third = sta[0]->next->next;
	first->next = third;
	second->next = first;
	sta[0] = second;
	first = stb[0];
	second = stb[0]->next;
	third = stb[0]->next->next;
	first->next = third;
	second->next = first;
	stb[0] = second;
	write(1, "ss\n", 3);
}
