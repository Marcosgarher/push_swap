/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:18:18 by marcogar          #+#    #+#             */
/*   Updated: 2023/06/20 19:36:24 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 1;
	if (!lst)
		return (0);
	if (lst->next == NULL)
		return (i);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
