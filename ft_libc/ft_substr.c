/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:21:20 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/14 21:21:36 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	str = malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	slen = 0;
	while (slen < len)
	{
		str[slen] = s[start + slen];
		slen++;
	}
	str[slen] = '\0';
	return (str);
}
/*#include <stdio.h>
int main (int argc, char *argv[])
{
	if (argc!= 4)
		return (-1);
	printf("Original: %s\n Buscar: %c\n Resultado: %s\n", argv[1],
		atoi(argv[2]), ft_substr(argv[1], atoi(argv[2]), atol(argv[3])));
	return (0);
}*/
