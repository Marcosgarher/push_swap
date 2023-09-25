/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:07:49 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/18 14:03:02 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_list **sta)
{
	t_list	*node;

	node = *sta;
	while (node->next->next)
		node = node->next;
	ft_lstadd_front(sta, node->next);
	node->next = NULL;
	write(1, "rra\n", 4);
}
