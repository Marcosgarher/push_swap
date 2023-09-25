/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:35:23 by marcogar          #+#    #+#             */
/*   Updated: 2023/09/21 14:48:46 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

/* UTILS */

char	**get_args(int counter, char **args);
void	choose_algoritm(t_list **sta, t_list **stb, int ne);
void    none_repeat(char **args);
void    only_one_sign(char *argument);
void	only_numbers(char *all);

/* LISTS */

int		print_list(t_list **nod);
int		create_stack(int argc, char **argv, t_list **sta);
void    free_split(char **arguments);

/* MOVEMENTS */

void	sa(t_list **sta);
void	sb(t_list **stb);
void	ss(t_list **sta, t_list **stb);
void	pa(t_list **sta, t_list **stb);
void	pb(t_list **sta, t_list **stb);
void	ra(t_list **sta);
void	rb(t_list **stb);
void	rra(t_list **sta);
void	rrb(t_list **std);
void	rrr(t_list **sta, t_list **stb);

/* HARDCODE */

void	two_code(t_list **sta);
void	three_code(t_list **sta);
void	four_code(t_list **sta, t_list **stb);
void	five_code(t_list **sta, t_list **stb);
long	bigger(t_list **sta);
long	lower(t_list **sta);
int		is_ordered(t_list **sta);

/* RADIX */

void radix(t_list **sta, t_list **stb);
void create_index(t_list **sta);

/* ERROR */

void	error_exit(void);

#endif
