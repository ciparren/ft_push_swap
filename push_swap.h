/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cintia <cintia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:44:33 by cintia            #+#    #+#             */
/*   Updated: 2026/02/18 18:26:21 by cintia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// NO DEBE HACER RELINK

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

// LISTA DOBLEMENTE ENLAZADA
// Cómo es el nodo por dentro
typedef struct s_node
{
    int             value;
    //int             index;  
    struct s_node   *next;
    struct s_node   *prev;
} t_node;
// Cómo es la pila
typedef struct s_stack
{
    t_node  *top;
    t_node  *bottom;
    int     size;
} t_stack;

// información de salida
typedef struct s_info
{
    t_stack *a; // declaro mi pila a
    t_stack *b; // declaro mi pila b
    int     ops_count[11]; /* Para contar sa, sb, pa, pb, etc. en --bench */
    int     total_ops;
    float   disorder;
    int     flag_bench;    /* Indica si --bench está activo */
}   t_info;

// PROTOTIPOS DE FUNCIONES
void    pa(t_info *info);
void    pb(t_info *info);

void    ra(t_info *info);
void    rb(t_info *info);
void    rr(t_info *info);

void    sa(t_info *info);
void    sb(t_info *info);
void    ss(t_info *info);

void    rra(t_info *info);
void    rrb(t_info *info);
void    rrr(t_info *info);


void    solve_simple(t_info *info);
void    solve_adaptive(t_info *info);
void    solve_medium(t_info *info);
void    solve_complex(t_info *info);

#endif