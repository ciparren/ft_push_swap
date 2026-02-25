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
   t_node *curr;
   int   j;

   if(!info || !info->a || info->a->size < 2)
      return ;

   i = 0;
   curr = NULL;
   while(i < info->a->size - 1)
   {
      swap = 0;
      curr = info->a->top;
      printf("Valor de curr: %d\n", curr->value);
      j = 0;
      while(j < (info->a->size - 1 - i))
      {
         if(curr->value > curr->next->value)
         {
            sa(info);
            printf("Cambiando: %d por %d\n", curr->value, nex->value);
            swap = 1;
         }
         else
            curr = curr->next;
         j++;         
      }
      if(!swap)
         break;
      i++;
   }
 }
