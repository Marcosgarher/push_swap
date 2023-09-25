/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:26:01 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/18 14:02:57 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rr(t_list **sta, t_list **stb)
{
	t_list	*second;

	if (sta || stb)
	{
		second = sta[0]->next;
		ft_lstadd_back(sta, *sta);
		sta[0] = second;
		second = stb[0]->next;
		ft_lstadd_back(stb, *stb);
		stb[0] = second;
	}
	write(1, "rr\n", 3);
}
