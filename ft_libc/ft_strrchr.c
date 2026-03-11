/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:57:50 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/18 17:57:53 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char		*r;
	int				i;
	unsigned char	chr;

	chr = (unsigned char)c;
	i = 0;
	r = NULL;
	while (s[i])
	{
		if (s[i] == chr)
			r = (char *)&s[i];
		i++;
	}
	if (chr == 0)
		return ((char *)&s[i]);
	return ((char *)r);
}
/*
#include <string.h>

int main ()
{
	char c[]="Carl Cox";
	printf("Propia: %s\n", ft_strrchr(c, 67));
	printf("Oficial: %s\n", strrchr(c, 67));
	return (0);
}*/