/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cintia <cintia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:00:13 by cintia            #+#    #+#             */
/*   Updated: 2026/02/20 17:01:19 by cintia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_info *info)
{
    if(!info->a || info->a->size < 2)
        return ;
    info->a->top = info->a->top->prev;
    info->ops[2]++;
    write(1, "rra\n", 3);
}

void    rrb(t_info *info)
{

    if(!info->b || info->b->size < 2)
        return ;
    info->b->top = info->b->top->prev;
    info->ops[2]++;
    write(1, "rrb\n", 3);
}

void    rrr(t_info *info)
{
    if(!info->a || info->a->size < 2)
        return ;
    info->a->top = info->a->top->prev;
    if(!info->b || info->b->size < 2)
        return ;
    info->b->top = info->b->top->prev;
        write(1, "rrr\n", 3);
}
