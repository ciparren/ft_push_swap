/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 20:36:31 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/14 20:36:36 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
// int main ()
// {
//         printf("%lu\n",ft_strlen("fdlñghsdfghsdf"));
//         printf("%lu\n",strlen("fdlñghsdfghsdfj"));
//         return (0);
// }