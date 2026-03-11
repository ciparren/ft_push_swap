/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:57:50 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/18 17:57:53 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>*/
#include <string.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size > 0)
	{
		while (src[j] && j < size - 1)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}

/*int	main(int argc, char **argv)
{
	char	*dest;
	char	*src;
	int i;

	if (argc != 4)
		return (-1);
	dest = strdup(argv[1]);
	src = strdup(argv[2]);
	i = ft_strlcpy(dest, src, atoi(argv[3]));
	printf("dest:%s\nsrc:%s\nsize:%i", dest, src, i);
	free(dest);
	free(src);
	return (0);
}*/
