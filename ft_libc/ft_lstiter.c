/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:13:11 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/31 18:16:30 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void test(void *tst)
{
    char *str;
    int i;

    i = 0;
    str = (char *)tst;
    while(str[i])
    {
        str[i]-=32;
        i++;
    }
    
}
#include <stdio.h>

int	main(void)
{
    t_list *lst;
    t_list *lst1;
    t_list *lst2;
    char a[] = "a";
    char b[] = "b";
    char c[] = "c";

    lst = malloc(sizeof(t_list));
    lst1 = malloc(sizeof(t_list));
    lst2 = malloc(sizeof(t_list));

    lst->content=a;
    lst->next=lst1;
    lst1->content=b;
    lst1->next=lst2;
    lst2->content=c;
    lst2->next=NULL;
    ft_lstiter(lst, test);
    while (lst)
    {
        printf("Letra :%s\n", (char *)lst->content);
        lst = lst->next;
    }
    return (0);
}*/