/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:17:47 by cintia            #+#    #+#             */
/*   Updated: 2026/03/07 11:07:59 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void solve_medium(t_info *info)
{
    // O(n√n)
    // chunk sorting
}

void chunksort(t_info *info)
{
    int chunk; // redondeaos abajo, más sencillo, ara calcular los trozos que vamos a usar
    int last;
    // ahora hay que ir cogiendo esos chunks hasta llegar a size completo de a e ir pasando a la pila B.
    int max;
    int height;
    t_node *curr;

    //chunk  = raíz de info->a->size;
    chunk = calc_root(info->a->size);
    last = chunk;
    height = 0;
    while(last < info->a->size)
    {
        if(info->a->top->index < last)
            pb(info);
        else
            ra(info);
        last += chunk;
    }
    curr = info->b->top;
    max = curr->index;
    while (max != (info->b->size - 1) && curr != info->b->top)
    {
        curr = curr->next;
        max = curr->index;
        height++;
    }
    if(height <= info->b->size / 2)
    {
        // vamos rotandoo rotamos hacia arriba
        rrb(info);
    }
    else
    {
        // rotamos hacia abajo
        rb(info);
    }
}

// Función para calcular la raíz cuadrada entera
long long calc_root(long long n) {

    long long inicio;
    long long fin; 
    long long ans;

    if (n < 0) return -1; 
    if (n == 0 || n == 1) return n;

    
    inicio = 1;
    fin = n;
    
    while (inicio <= fin) {
        long long mid = (inicio + fin) / 2;

        if (mid * mid == n) {
            return mid;
        }

        if (mid * mid < n) {
            inicio = mid + 1;
            ans = mid; 
        } else {
            fin = mid - 1;
        }
    }
    return ans;
}
