/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 23:26:11 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/20 23:26:14 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	int					i;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}
// #include <stdio.h>
// int main ()
// {
//     // char *s="ABCDEFGHIJKLMN";
//     // char *c="ABCDEFGHIJKLMN";
//     int c[5] = {1,2,3,4,6};
//     int s[4]={1,2,3,4};
//     // int *f;
//     // int *g;
//     int f;
//     int g;
//     //printf("Antes: %s\n", s);
//     f=memcmp(s, c, 0*(sizeof(int)));
//     printf("Oficial: %d", f);
//     //printArray(f,4);
//     //printf("\n");
//     g=ft_memcmp(s, c, 0*(sizeof(int)));
//     printf("\nPropia: %d", g);
//     //printArray(g,4);
//     printf("\n");
//     return (0);
// }
