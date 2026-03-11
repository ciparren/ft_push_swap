/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:57:50 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/20 19:57:03 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] && str2[i] && i < n - 1)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}
// #include <stdio.h>
// int main (int argc, char *argv[])
// {
//     int n=0;
//     if(argc!= 3)
//         return (-1);
//     n=ft_strncmp(argv[1], argv[2], 5);
//     printf("Propia:\ns1: %s\ns2: %s\nn: %d\n", argv[1], argv[2], n);
//     n=strncmp(argv[1], argv[2], 5);
//     printf("Oficial:\ns1: %s\ns2: %s\nn: %d\n", argv[1], argv[2], n);
//     return (0);
// }
