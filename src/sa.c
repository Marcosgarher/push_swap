/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:23:23 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/18 14:03:11 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_list **sta)
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
	write(1, "sa\n", 3);
}
