/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:13:11 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/31 18:16:30 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	if (!lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		list = list->next;
		del((*lst)->content);
		free(*lst);
		*lst = list;
	}
	*lst = NULL;
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
    ft_lstclear(&lst, delete);
    if (!lst)
      printf("Lista eliminada\n");
    return (0);
}*/