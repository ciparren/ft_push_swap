/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:04:47 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/27 19:04:50 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static void	*ft_freeall(char **s, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static int	ft_countwords(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*make_word(char const *s, char c, int *i)
{
	int		wlen;
	char	*word;

	wlen = 0;
	while (s[*i + wlen] && s[*i + wlen] != c)
		wlen++;
	word = ft_substr(s, *i, wlen);
	*i += wlen;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		var[3];

	if (!s)
		return (NULL);
	var[0] = 0;
	var[2] = 0;
	var[1] = ft_countwords(s, c);
	list = malloc(sizeof(char *) * (var[1] + 1));
	if (!list)
		return (NULL);
	while (var[1] > var[2] && s[var[0]])
	{
		if (s[var[0]] != c)
		{
			list[var[2]] = make_word(s, c, &var[0]);
			if (!list[var[2]])
				return (ft_freeall(list, var[2]));
			var[2]++;
		}
		else
			var[0]++;
	}
	list[var[2]] = NULL;
	return (list);
}

/*#include <stdio.h>
int main (int argc, char *argv[])
{
    char **lista;
    int i = 0;
    if (argc != 3)
        return (-1);
    lista = ft_split(argv[1], argv[2][0]);
    while (lista[i])
    {
        printf("Palabra %i: %s\n",i,lista[i]);
        i++;
    }

    return (0);
}*/