/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 20:14:30 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/14 20:14:35 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int i)
{
	if ((i >= 0 && i <= 127))
		return (1);
	else
		return (0);
}
// #include <ctype.h>
// #include <stdio.h>
// int main ()
// {
//         printf("%i\n", ft_isascii(128));
//         printf("%i\n", isascii(128));
//         return (0);
// }