/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:15:39 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/18 14:03:05 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rrb(t_list **stb)
{
	t_list	*node;

	node = *stb;
	while (node->next->next)
		node = node->next;
	ft_lstadd_front(stb, node->next);
	node->next = NULL;
	write(1, "rrb\n", 4);
}
