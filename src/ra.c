/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:54:57 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/18 14:02:50 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_list **sta)
{
	t_list	*second;

	if (sta)
	{
		second = sta[0]->next;
		ft_lstadd_back(sta, *sta);
		sta[0] = second;
		write(1, "ra\n", 3);
	}
}
