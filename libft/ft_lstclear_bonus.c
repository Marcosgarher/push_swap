/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:31:19 by marcogar          #+#    #+#             */
/*   Updated: 2023/06/21 12:05:46 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*to_delete;

	to_delete = *lst;
	if (!to_delete)
		return ;
	while (to_delete)
	{
		node = to_delete->next;
		ft_lstdelone(to_delete, del);
		to_delete = node;
	}
	*lst = NULL;
}
