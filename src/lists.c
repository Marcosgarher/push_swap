/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:24:25 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/21 14:49:15 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	print_list(t_list **nod)
{
	t_list	*node;

	node = *nod;
	while (node)
	{
		printf("-----------------------------------------------------------------------------------------------\n");
		printf("Index : %i ", node->index);
		printf("Puntero actual: %p ", node);
		printf("Contenido : %li ", *((long *)(node->content)));
		printf("Siguiente puntero: %p\n", node->next);
		printf("-----------------------------------------------------------------------------------------------\n");
		node = node->next;
	}
	return (0);
}
int	create_stack(int argc, char **argv, t_list **sta)
{
	t_list	*new;
	char	**arguments;
	int		i;
	long	*cont;

	arguments = get_args(argc, argv);
	i = -1;
	while (arguments[++i])
	{
		only_one_sign(arguments[i]);
		if(ft_atol(arguments[i]) < INT_MIN || ft_atol(arguments[i]) > INT_MAX)
		{
			free(sta);
			error_exit();
		}
		cont = malloc(sizeof(int));
		if (!cont)
			return (0);
		*cont = ft_atol(arguments[i]);
		new = ft_lstnew(cont);
		ft_lstadd_back(sta, new);
	}
	none_repeat(arguments);
	free_split(arguments);
	return (i);
}

void free_split(char **arguments)
{
	int i;

	i = 0;
	while(arguments[i])
		free(arguments[i++]);
	free(arguments);
}
