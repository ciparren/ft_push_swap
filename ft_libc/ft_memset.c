/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:21:20 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/14 21:21:36 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = s;
	while (n--)
	{
		str[i] = c;
		i++;
	}
	return ((void *)str);
}
/*
#include <stdio.h>

void	printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}
int main ()
{
     //char s[21]="Hola me llamo gabriel";
     int s[4]={2,5,6,2};
     //printf("Antes: %s\n", s);
     //ft_memset(s, '.', 2*(sizeof(char)));
     //ft_memset(s, 0, 2*(sizeof(int)));
     //memset(s, 0, 2*(sizeof(int)));
     printf("Despues:");
     printArray(ft_memset(s, 0, 2*(sizeof(int))),4);
     return (0);
}*/