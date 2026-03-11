/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:20:19 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/31 17:20:21 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
    lst1->next=new;
    new->content=&i;
    new->next=NULL;
    ft_lstsize(lst);
    printf("%i -> ", ft_lstsize(lst));


    return (0);
}*/
