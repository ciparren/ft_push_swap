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


 void bubblesort (t_info *info)
 {
   int swap;
   int i;
   int tmp;
   int   j;

   swap = 1;
   i = 0;
   j = info->a->size - 1;

    while(i < (info->a->size - 1) && swap)
    {
      swap = 0;
      while(j > i )
      {
         if(info->a->top->value)
         {
            sa(info);
            swap = 1;
         }
         j--;         
      }
      if(swap)
         i++;
    }
 }