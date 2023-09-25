/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:15:42 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/18 18:32:42 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_lst;

	new_lst = malloc(sizeof(t_list));
	if (!new_lst)
		return (NULL);
	new_lst->content = content;
	new_lst->next = NULL;
	new_lst->index = 0;
	return (new_lst);
}
