/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:21:20 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/14 21:21:36 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		c;
	int		j;

	if (!s1 || !set)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	c = ft_strlen(s1) - 1;
	while (c >= i && ft_strchr(set, s1[c]))
		c--;
	str = malloc((c - i + 2) * sizeof(char));
	if (!str)
		return (NULL);
	while (i <= c)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
/*#include <stdio.h>
int main (int argc, char *argv[])
{
	if (argc!= 3)
		return (-1);
	printf("Primera: %s\nQuitar: %s\nResultado: %s\n", argv[1], argv[2],
		ft_strtrim(argv[1],argv[2]));
	return (0);
}
//Pongo +2 en el malloc porque 1 es por el nulo que no pilla
//el strlen de c y otro para el nulo propio de str*/
