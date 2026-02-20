/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cintia <cintia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:15:46 by cintia            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/02/20 10:35:44 by cintia           ###   ########.fr       */
=======
/*   Updated: 2026/02/20 16:34:02 by cintia           ###   ########.fr       */
>>>>>>> 3fac858 (recover repository after corruption)
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_info *info)
{
    t_node *first;
    t_node *second;
    t_node *third;
    t_node *last;

    if(info->a->size < 2)
        return ;
    first = info->a->top;
    second = first->next;
    if(info->a->size > 2)
    {
        last = first->prev;
        third = second->next;
        last->next = second;
        second->prev = last;
        third->prev = first;
        first->next = third;
        second->next = first;
        first->prev = second;
    }
    info->a->top = second;
    info->ops[6]++;
    write(1, "sb\n", 3);
}

void    sb(t_info *info)
{
    t_node *first;
    t_node *second;
    t_node *third;
    t_node *last;

    if(info->b->size < 2)
        return ;
    first = info->b->top;
    second = first->next;
    if(info->b->size > 2)
    {
        last = first->prev;
        third = second->next;
        last->next = second;
        second->prev = last;
        third->prev = first;
        first->next = third;
        second->next = first;
        first->prev = second;
    }
    info->b->top = second;
    info->ops[6]++;
    write(1, "sb\n", 3);
}

void    ss(t_info *info)
{
<<<<<<< HEAD
=======
    
>>>>>>> 3fac858 (recover repository after corruption)
    sa(info);
    sb(info);
    write(1, "ss\n", 3);
    info->ops[7]++;
}