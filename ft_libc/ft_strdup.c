/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:20:41 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/21 22:22:47 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	char	*sstr;

	i = 0;
	sstr = (char *)s;
	str = malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (sstr[i])
	{
		str[i] = sstr[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	if (argc !=2)
		return (-1);
	printf("Oficial\n Antes: %s - Despues: %s\n", argv[1], strdup(argv[1]));
	printf("Propia\n Antes: %s - Despues: %s", argv[1], ft_strdup(argv[1]));
}*/