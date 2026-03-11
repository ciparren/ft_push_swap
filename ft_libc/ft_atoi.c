/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:33:16 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/21 20:33:19 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *nptr)
{
	int		sng;
	int		nmb;
	char	*str;

	str = (char *)nptr;
	nmb = 0;
	sng = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sng *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nmb += (*str - 48);
		str++;
		if (!(*str >= 48 && *str <= 57))
			break ;
		if (*str != '\0')
			nmb *= 10;
	}
	return (nmb * sng);
}
/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (-1);
	printf("Numero: %s\n", argv[1]);
	printf("Atoi Of: %i\n", atoi(argv[1]));
	printf("Atoi Pr: %i\n", ft_atoi(argv[1]));
	return (0);
}*/
