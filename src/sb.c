/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:34:59 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/08 12:45:52 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sb(t_list **stb)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	first = stb[0];
	second = stb[0]->next;
	third = stb[0]->next->next;
	first->next = third;
	second->next = first;
	stb[0] = second;
	write(1, "sb\n", 3);
}
