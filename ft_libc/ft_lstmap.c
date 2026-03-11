/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:13:11 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/31 18:16:30 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		if (!head)
			head = ft_lstnew(f(lst->content));
		else
		{
			temp = ft_lstnew(f(lst->content));
			if (!temp)
			{
				ft_lstclear(&head, del);
				return (NULL);
			}
			else
				ft_lstadd_back(&head, temp);
		}
		lst = lst->next;
	}
	return (head);
}
/*
void	*test(void *tst)
{
    char *str;
    char *copy;
    int i;

    i = 0;
    str = (char *)tst;
    copy = ft_strdup(str);
    while(copy[i])
    {
        copy[i]-=32;
        i++;
    }
    return (copy);
}
void	delete(void *lst)
{
    free(lst);
}
#include <stdio.h>

int	main(void)
{
    t_list *lst;
    t_list *lst1;
    t_list *lst2;
    t_list *res;
    t_list *temp;
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
    res = ft_lstmap(lst, test, delete);
    temp = res;
    while (temp)
    {
        printf("Letra :%s\n", (char *)temp->content);
        temp = temp->next;
    }
    ft_lstclear(&res, delete);
    free(lst);
    free(lst1);
    free(lst2);
    return (0);
}*/