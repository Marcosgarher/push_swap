/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:30:28 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/18 14:02:42 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pb(t_list **sta, t_list **stb)
{
	t_list	*second;

	if (stb || sta)
	{
		second = sta[0]->next;
		ft_lstadd_front(stb, *sta);
		sta[0] = second;
		write(1, "pb\n", 3);
	}
}
