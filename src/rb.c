/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:16:03 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/18 14:02:54 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rb(t_list **stb)
{
	t_list	*second;

	if (stb)
	{
		second = stb[0]->next;
		ft_lstadd_back(stb, *stb);
		stb[0] = second;
		write(1, "rb\n", 3);
	}
}
