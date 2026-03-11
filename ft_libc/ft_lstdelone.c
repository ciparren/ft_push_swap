/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:56:12 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/31 14:56:14 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	delete(void *lst)
{
    free(lst);
}

#include <stdio.h>

int	main(void)
{
    t_list *lst;
    t_list *lst1;
    t_list *new;
    int *i = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    int *j = malloc(sizeof(int));
    *i = 1;
    *c = 2;
    *j = 3;

    lst = malloc(sizeof(t_list));
    lst1 = malloc(sizeof(t_list));
    new = malloc(sizeof(t_list));
    if (!lst || !lst1 || !new)
        return (1);
    
    lst ->content = i;
    lst->next= lst1;
    lst1->content=c;
    lst1->next=new;
    new->content=j;
    new->next=NULL;
    ft_lstdelone(lst1, delete);
    lst->next = new;
	//if i dont put this line will be seg 
    //fault bc is trying to read an empty node
    while (lst)
    {
        printf("%i -> ", *(int *)lst->content);
        lst = lst->next;
    }
    return (0);
}*/