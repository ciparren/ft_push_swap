/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:39:29 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/31 17:39:32 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
    lst1->content="Nombre es";
    lst1->next=new;
    new->content="Gladiador";
    new->next=NULL;
    printf("%s\n", (char*)ft_lstlast(lst)->content);
    return (0);
}*/
