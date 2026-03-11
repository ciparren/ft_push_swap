/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:57:50 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/18 17:57:53 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	i = ft_strlen(dst);
	if (i >= size)
		return (ft_strlen(src) + size);
	while (src[j] && (size - 1 - i) > j)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	j = 0;
	while (src[j])
		j++;
	return (i + j);
}
/*
#include <bsd/string.h>
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*dest;
	char	*src;
	int i;

	if (argc != 4)
		return (-1);
	dest = strdup(argv[1]);
	src = strdup(argv[2]);
	i = ft_strlcat(dest, src, atoi(argv[3]));
	printf("dest:%s\nsrc:%s\nsize:%i\n", dest, src, i);
	free(dest);
	free(src);
	return (0);
}*/