/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 22:32:01 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/28 22:32:04 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*void testiteri(unsigned int i, char* c)
{
	unsigned int	cont;
	unsigned int	i;
	int				i;
	int				i;

	i = 0;
	cont = i;
	while (c[cont])
	{
		c[cont]-=1;
		cont++;
	}
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>
int main (int argc, char *argv[])
{
	if (argc != 2)
		return (-1);
	ft_striteri(argv[1], testiteri);
	printf("Frase: %s", argv[1]);
	return (0);
}*/
