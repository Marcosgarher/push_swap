/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcode_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:11:52 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/21 14:38:34 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	bigger(t_list **sta)
{
	long	mb;
	t_list	*node;

	node = sta[0];
	mb = *((long *)(node->content));
	while (node)
	{
		if (*(long *)(node->content) > mb)
			mb = *(long *)(node->content);
		node = node->next;
	}
	return (mb);
}

long	lower(t_list **sta)
{
	long	mb;
	t_list	*node;

	node = sta[0];
	mb = *((long *)(node->content));
	while (node)
	{
		if (*(long *)(node->content) < mb)
			mb = *(long *)(node->content);
		node = node->next;
	}
	return (mb);
}

int	is_ordered(t_list **sta)
{
	t_list	*node;

	node = sta[0];
	while (node->next)
	{
		if (*(long *)(node->content) > *(long *)(node->next->content))
			return (0);
		node = node->next;
	}
	ft_lstclear(sta, free);
	return (1);
}
