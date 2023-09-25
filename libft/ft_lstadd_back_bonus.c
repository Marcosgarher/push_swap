/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 09:42:19 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/18 14:09:41 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	if (!node)
		*lst = new;
	else
	{
		while (node->next)
			node = node->next;
		node->next = new;
		node->next->next = NULL;
	}
}
