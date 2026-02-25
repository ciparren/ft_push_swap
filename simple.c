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



void ordenar(t_stack &a) {
    bool inter = true;
    int i = 0; int tmp;
    while ((i < lista.cont - 1) && inter) {
        inter = false;
        for (int j = lista.cont - 1; j > i; j--)
            if (lista.elems[j] < lista.elems[j - 1]) {
                tmp = lista.elems[j];
                lista.elems[j] = lista.elems[j - 1];
                lista.elems[j - 1] = tmp;
                inter = true;
            }
        if (inter)
            i++;
        }
 }

 void bubblesort (t_stack *a)
 {
    int swap;
    int i;
    int tmp;

    swap = 0;
    i = 0;

    while(i < (a->size - 1) )
 }