/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:50:25 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/31 13:50:27 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*cont;

	cont = malloc(sizeof(t_list));
	if (!cont)
		return (NULL);
	cont->content = content;
	cont->next = NULL;
	return (cont);
}
/*#include <stdio.h>
int	main(void)
{
    t_list *temp;
    int i = 36;

    temp = ft_lstnew(&i);
    while (temp)
    {
        printf("%i -> ", *(int *)temp -> content);
        temp = temp -> next;
    }
    return (0);
}*/
