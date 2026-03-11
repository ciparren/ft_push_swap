/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:47:54 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/31 17:47:57 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	list = *lst;
	list = ft_lstlast(list);
	list->next = new;
}

/*#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
    t_list *lst;
    t_list *lst1;
    t_list *new;

    lst = malloc(sizeof(t_list));
    lst1 = malloc(sizeof(t_list));
    new = malloc(sizeof(t_list));
    lst ->content = "Mi";
    lst->next= lst1;
    lst1->content="Nombre";
    lst1->next=NULL;
    new->content="es gladiador";
    new->next=NULL;
    ft_lstadd_back(&lst, new);
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }

    return (0);
}*/
