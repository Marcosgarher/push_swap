/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:16:37 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/18 14:03:08 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rrr(t_list **sta, t_list **stb)
{
	t_list	*node;

	node = *sta;
	while (node->next->next)
		node = node->next;
	ft_lstadd_front(sta, node->next);
	node->next = NULL;
	while (node->next->next)
		node = node->next;
	ft_lstadd_front(stb, node->next);
	node->next = NULL;
	write(1, "rrr\n", 4);
}
