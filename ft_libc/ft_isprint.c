/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 20:29:02 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/14 20:29:06 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int i)
{
	if ((i >= 32 && i <= 126))
		return (1);
	else
		return (0);
}
// int main ()
// {
//         printf("%i\n", ft_isprint(' '));
//         printf("%i\n", isprint(' '));
//         return (0);
// }