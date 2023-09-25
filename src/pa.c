/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:42:44 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/18 14:02:39 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_list **sta, t_list **stb)
{
	t_list	*second;

	if (stb || sta)
	{
		second = stb[0]->next;
		ft_lstadd_front(sta, *stb);
		stb[0] = second;
		write(1, "pa\n", 3);
	}
}
