/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcogar <marcogar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:55:16 by marcogar          #+#    #+#             */
/*   Updated: 2023/06/19 19:37:06 by marcogar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*mem;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	mem = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	mem[(ft_strlen(s1) + ft_strlen(s2))] = '\0';
	if (!mem)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		mem[i] = s1[i];
	j = 0;
	while (s2[j] != '\0')
		mem[i++] = s2[j++];
	mem[i] = '\0';
	free(s1);
	return (mem);
}
