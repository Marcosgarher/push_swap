/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:07:58 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/21 14:49:50 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_leaks(void)
{
	system("leaks push_swap");
}

int	main(int argc, char *argv[])
{
	t_list	**sta;
	t_list	**stb;
	int		ne;

	// atexit(ft_leaks);
	sta = NULL;
	stb = NULL;
	if (argc >= 2)
	{
		sta = ft_calloc(sizeof(t_list *), 1);
		if (!sta)
			return (0);
		ne = create_stack(argc, argv, sta);
		if(is_ordered(sta))
			exit(1);
		stb = ft_calloc(sizeof(t_list *), 1);
		if (!stb)
			return (0);
		if(ne == 1)
			exit(1);
		choose_algoritm(sta, stb, ne);
	}
	return (0);
}
