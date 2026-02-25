/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:04:32 by ciparren          #+#    #+#             */
/*   Updated: 2026/02/25 13:04:38 by ciparren         ###   ########.fr       */
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
    sa(info);
    sb(info);
    write(1, "ss\n", 3);
    info->ops[7]++;
}
