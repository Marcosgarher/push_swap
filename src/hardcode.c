/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:31:56 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/22 11:56:21 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	two_code(t_list **sta)
{
	if (!is_ordered(sta))
		sa(sta);
	ft_lstclear(sta, free);
}

void	three_code(t_list **sta)
{
	long	mb;

	mb = 0;
	mb = bigger(sta);
	if (mb == *((long *)(sta[0]->content)))
		ra(sta);
	else if (mb == *((long *)(sta[0]->next->content)))
		rra(sta);
	if (!is_ordered(sta))
		sa(sta);
	ft_lstclear(sta, free);
}

void	four_code(t_list **sta, t_list **stb)
{
	long	mb;

	mb = 0;
	mb = lower(sta);
	while (mb != *((long *)(sta[0]->content)))
		rra(sta);
	pb(sta, stb);
	three_code(sta);
	pa(sta, stb);
	ft_lstclear(sta, free);
}

void	five_code(t_list **sta, t_list **stb)
{
	long	mb;

	mb = 0;
	mb = lower(sta);
	while (mb != *((long *)(sta[0]->content)))
		rra(sta);
	pb(sta, stb);
	mb = lower(sta);
	while (mb != *((long *)(sta[0]->content)))
		rra(sta);
	pb(sta, stb);
	three_code(sta);
	pa(sta, stb);
	pa(sta, stb);
	ft_lstclear(sta, free);
}
