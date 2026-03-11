/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:48:46 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/18 13:48:54 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
// void printArray(int arr[], int n)
// {
//    for (int i=0; i<n; i++)
//       printf("%d ", arr[i]);
// }

// int main ()
// {
//     //char s[21]="Hola me llamo gabriel";
//     int s[4]={2,5,6,2};
//     //printf("Antes: %s\n", s);
//     //ft_memset(s, '.', 2*(sizeof(char)));
//     ft_bzero(s, 0*(sizeof(int)));
//     //memset(s, '.', 2);
//     printf("Despues:");
//     printArray(s,4);
//     s[0]=2;
//     s[1]=5;
//     s[2]=6;
//     s[3]=2;
//     bzero(s, 0*(sizeof(int)));
//     printf("\nOficial:");
//     printArray(s,4);
//     return (0);
// }
