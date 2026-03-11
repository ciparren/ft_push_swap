/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:56:12 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/31 14:56:14 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
    t_list *lst;
    t_list *lst1;
    t_list *new;
    int i =1;
    int c = 2;
    int j= 3;

    lst = malloc(sizeof(t_list));
    lst1 = malloc(sizeof(t_list));
    new = malloc(sizeof(t_list));
    lst ->content = &c;
    lst->next= lst1;
    lst1->content=&j;
    lst1->next=NULL;
    new->content=&i;
    new->next=NULL;
    ft_lstadd_front(&lst, new);
    while (lst)
    {
        printf("%i -> ", *(int *)lst->content);
        lst = lst->next;
    }

    return (0);
}*/