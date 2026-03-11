/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:36:12 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/18 15:36:15 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d_str;
	unsigned const char	*s_str;

	if (!dest && !src)
		return (NULL);
	d_str = (unsigned char *)dest;
	s_str = (const unsigned char *)src;
	if (d_str < s_str)
		ft_memcpy(d_str, s_str, n);
	else
	{
		while (n--)
			d_str[n] = s_str[n];
	}
	return (d_str);
}
// #include <stdio.h>
//  void printArray(int arr[], int n)
// {
//    for (int i=0; i<n; i++)
//       printf("%d ", arr[i]);
// }

// int	main(void)
// {
// 	char	d[];
// 	char	*g;

// 	//char s[21]="XXXXXXXXXXXXXXXXX";
// 	d[] = "abcdef";
// 	// int s[4]={1,1,1,1};
// 	// int d[3]={2,5,6};
// 	//char *f;
// 	// printf("Antes: %s\n", d);
// 	// f=ft_memmove(d+1, d, 2*(sizeof(char)));
// 	// printf("Despues: %s", f);
// 	// printArray(f,3);
// 	// d[0]=2;
// 	// d[1]=5;
// 	// d[2]=6;
// 	// d[3]=2;
// 	// d[4]=7;
// 	// d[5]=7;
// 	// d[6]=8;
// 	g = memmove(d + 2, d, 4 * (sizeof(char)));
// 	printf("\nOficial: %s", d);
// 	// printArray(g,3);
// 	return (0);
// }
