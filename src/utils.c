/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:21:18 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/21 14:39:54 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**get_args(int counter, char **args)
{
	char	**arguments;
	char	*all;
	int		i;

	i = 1;
	all = NULL;
	while (i <= (counter - 1))
	{
		all = ft_strjoin(all, args[i]);
		all = ft_strjoin(all, " ");
		++i;
	}
	only_numbers(all);
	arguments = ft_split(all, 32);
	free(all);
	return (arguments);
}

void	choose_algoritm(t_list **sta, t_list **stb, int ne)
{
	if (ne == 2)
		two_code(sta);
	else if (ne == 3)
		three_code(sta);
	else if (ne == 4)
		four_code(sta, stb);
	else if (ne == 5)
		five_code(sta, stb);
	else
		radix(sta, stb);
}

void	none_repeat(char **args)
{
	int		i;
	int		j;
	long	current;

	i = 0;
	j = 0;
	current = 0;
	while (args[i])
	{
		current = ft_atol(args[i]);
		j = 0;
		while (args[j])
		{
			if (current == ft_atol(args[j]) && i != j)
				error_exit();
			++j;
		}
		++i;
	}
}

void only_one_sign(char *argument)
{
	int i;
	
	i = 0;
	if(argument[i] == '-' || argument[i] == '+')
	{
		++i;
		if(argument[i] == '-' || argument[i] == '+')
			error_exit();
		else if(!ft_isdigit(argument[i]))
			error_exit();
	}
}

void	only_numbers(char *all)
{
	int i = 0;
	
	while (all[i])
	{
		if(all[i] == '-' || all[i] == '+')
			++i;
		while(all[i] != 32)
		{
			if(!ft_isdigit(all[i]))
				error_exit();
			++i;
		}
		++i;
	}
}
