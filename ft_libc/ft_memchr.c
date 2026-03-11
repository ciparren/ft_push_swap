/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 20:50:38 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/20 20:50:42 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		chr;

	chr = (unsigned char)c;
	str = (const unsigned char *)s;
	while (n--)
	{
		if (*str == chr)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
//#include <stdio.h>
//  void printArray(int arr[], int n)
// {
//    for (int i=0; i<n; i++)
//       printf("%d ", arr[i]);
// }

// int main ()
// {
//     // char *s="ABCDEFGHIJKLMN";
//     // char c= 69;
//     int c = 2;
//     int s[4]={1,2,3,4};
//     int *f;
//     int *g;
//     // char *f;
//     // char *g;
//     //printf("Antes: %s\n", s);
//     f=ft_memchr(s, c, 4*(sizeof(int)));
//     //printf("Despues: %s", f);
//     printArray(f,4);
//     printf("\n");
//     g=memchr(s, c, 4*(sizeof(int)));
//     //printf("\nOficial: %s", g);
//     printArray(g,4);
//     printf("\n");
//     return (0);
// }