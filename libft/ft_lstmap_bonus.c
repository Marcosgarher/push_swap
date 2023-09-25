/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:04:43 by marcogar          #+#    #+#             */
/*   Updated: 2023/06/21 12:08:29 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*node;
	void	*ptr;

	if (!lst || !f)
		return (0);
	map = NULL;
	while (lst)
	{
		ptr = f(lst->content);
		node = ft_lstnew(ptr);
		if (!node)
		{
			del(ptr);
			ft_lstclear(&map, (*del));
			return (0);
		}
		ft_lstadd_back(&map, node);
		lst = lst->next;
	}
	return (map);
}
