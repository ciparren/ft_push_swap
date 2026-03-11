/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:20:41 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/21 22:22:47 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	if (nmemb * size > 2147483647)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>

int main (int argc, char *argv[])
{
	//int i;
	char *pptr;
	char *optr;
	int n;

	if (argc != 2)
		return (-1);

	n = atoi(argv[1]);

	pptr = ft_calloc(n, sizeof(char));
	optr = calloc(n, sizeof(char));
	printf("ft_calloc %s | calloc %s",pptr,optr);
	//i = 0;
//    while (i < n)
//    {
//        printf("ft_calloc[%i] = %d | calloc[%d] = %d\n",i, pptr[i], i,
		optr[i]);
//        i++;
//    }

	free(pptr);
	free(optr);
	return (0);
}*/