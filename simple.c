/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cintia <cintia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:03:26 by cintia            #+#    #+#             */
/*   Updated: 2026/02/20 17:03:35 by cintia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void bubblesort(t_info *info)
{
    int  i;
    int  j;
    int  swap;

    if (!info->a || info->a->size < 2)
        return ;
    i = 0;
    while (i < info->a->size)
    {
        swap = 0;
        j = 0;
        while (j < info->a->size - 1)
        {
            if (info->a->top->value > info->a->top->next->value)
            {
                sa(info);
                swap = 1;
            }
            ra(info); 
            j++;
        }
        ra(info); 
        
        if (!swap)
            break;
        i++;
    }
}