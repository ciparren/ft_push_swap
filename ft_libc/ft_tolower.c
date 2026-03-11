/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:57:50 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/18 17:57:53 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (!c)
		return (0);
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int main ()
{
	char c;
	c=ft_tolower(70);
	printf("Propia: %c\n", c);
	c= tolower(70);
	printf("Oficial: %c\n", c);
	return (0);
}*/