/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:26:53 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/21 14:49:00 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void radix(t_list **sta, t_list **stb)
{
    int cont;
    int size;

    create_index(sta);
    cont = 0;
    while(!is_ordered(sta))
    {
        size = ft_lstsize(*sta);
        while(size > 0)
        {
            if(((sta[0]->index >> cont) & 1) == 1)
                ra(sta);
            else
                pb(sta, stb);
            --size;
        }
        while(ft_lstsize(*stb) != 0)
            pa(sta, stb);
        ++cont;
    }
}

void	create_index(t_list **sta)
{
	int		index;
	t_list	*node;
	t_list	*iter;
	long	number;

	node = *sta;
	iter = *sta;
	index = 1;
	number = 0;
	while (node)
	{
		number = *((long *)(node->content));
		iter = *sta;
		while (iter)
		{
			if (number > *((long *)(iter->content)))
				++index;
			iter = iter->next;
		}
		node->index = index;
		index = 1;
		node = node->next;
	}
}
