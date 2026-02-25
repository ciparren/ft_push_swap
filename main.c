/* main.c - Programa completo para probar bubblesort */
#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

// Función para inicializar la estructura info
void init_info(t_info *info, t_stack *stack_a, t_stack *stack_b)
{
    stack_a->top = NULL;
    stack_a->size = 0;
    stack_b->top = NULL;
    stack_b->size = 0;
    
    info->a = stack_a;
    info->b = stack_b;
    
    for (int i = 0; i < 11; i++)
        info->ops[i] = 0;
    info->total_ops = 0;
    info->bench = 0;
    info->strategy = SIMPLE;
}

// Función para imprimir una pila de forma legible
void print_stack_verbose(t_stack *stack, char *nombre)
{
    t_node *curr;
    int i;
    
    if (!stack || stack->size == 0)
    {
        printf("%s: [vacía]\n", nombre);
        return;
    }
    
    printf("%s (size=%d): [", nombre, stack->size);
    curr = stack->top;
    i = 0;
    while (i < stack->size)
    {
        printf("%d", curr->value);
        if (i < stack->size - 1)
            printf(", ");
        curr = curr->next;
        i++;
    }
    printf("]\n");
    
    // Verificar la estructura circular (opcional)
    printf("  Verificación circular: primer nodo=%d, último nodo=%d, último->next=primer nodo? %s\n",
           stack->top->value,
           stack->top->prev->value,
           (stack->top->prev->next == stack->top) ? "Sí" : "No");
}

// Función para liberar una pila
void free_stack_completo(t_stack *stack)
{
    t_node *curr;
    t_node *next;
    int i;
    
    if (!stack || !stack->top)
        return;
    
    curr = stack->top;
    i = 0;
    while (i < stack->size)
    {
        next = curr->next;
        free(curr);
        curr = next;
        i++;
    }
    stack->top = NULL;
    stack->size = 0;
}

// Función para cargar números en la pila desde un array
void cargar_numeros(t_info *info, int *numeros, int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        append_node(info, numeros[i]);
    }
}

// Función para probar un caso específico
void probar_caso(t_info *info, int *numeros, int cantidad, char *descripcion)
{
    printf("\n%s\n", descripcion);
    printf("========================================\n");
    
    // Cargar números
    cargar_numeros(info, numeros, cantidad);
    
    printf("ANTES de ordenar:\n");
    print_stack_verbose(info->a, "Stack A");
    print_stack_verbose(info->b, "Stack B");
    
    printf("\nPROCESO de ordenación:\n");
    printf("------------------------\n");
    
    // Ordenar
    bubblesort(info);
    
    printf("\nRESULTADO:\n");
    printf("------------------------\n");
    print_stack_verbose(info->a, "Stack A");
    print_stack_verbose(info->b, "Stack B");
    
    // Verificar si está ordenado
    int ordenado = 1;
    t_node *curr = info->a->top;
    for (int i = 0; i < info->a->size - 1; i++)
    {
        if (curr->value > curr->next->value)
        {
            ordenado = 0;
            break;
        }
        curr = curr->next;
    }
    
    printf("\nRESUMEN:\n");
    printf("- ¿Está ordenado? %s\n", ordenado ? "SÍ" : "NO");
    printf("- Operaciones realizadas: sa=%d, sb=%d, ss=%d\n", 
           info->ops[5], info->ops[6], info->ops[7]);
    printf("- Total operaciones: %d\n", 
           info->ops[5] + info->ops[6] + info->ops[7]);
    
    // Liberar memoria para el siguiente caso
    free_stack_completo(info->a);
}

int main()
{
    t_info info;
    t_stack stack_a;
    t_stack stack_b;
    
    printf("========================================\n");
    printf("     TEST DE BUBBLE SORT\n");
    printf("     Lista doblemente enlazada circular\n");
    printf("========================================\n");
    
    // CASO 1: Lista aleatoria (tu ejemplo original)
    init_info(&info, &stack_a, &stack_b);
    int caso1[] = {3, 1, 2, 7, 34};
    probar_caso(&info, caso1, 5, "CASO 1: Lista aleatoria [3, 1, 2, 7, 34]");
    
    // // CASO 2: Lista ya ordenada
    // init_info(&info, &stack_a, &stack_b);
    // int caso2[] = {1, 2, 3, 4, 5, 6};
    // probar_caso(&info, caso2, 6, "CASO 2: Lista ya ordenada [1, 2, 3, 4, 5, 6]");
    
    // CASO 3: Lista inversamente ordenada
    init_info(&info, &stack_a, &stack_b);
    int caso3[] = {10, 9, 8, 7, 6, 5, 4};
    probar_caso(&info, caso3, 7, "CASO 3: Lista inversa [10, 9, 8, 7, 6, 5, 4]");
    
    // CASO 4: Lista con números duplicados
    init_info(&info, &stack_a, &stack_b);
    int caso4[] = {5, 2, 5, 1, 2, 3};
    probar_caso(&info, caso4, 6, "CASO 4: Con duplicados [5, 2, 5, 1, 2, 3]");
    
    // // CASO 5: Lista pequeña (3 elementos)
    // init_info(&info, &stack_a, &stack_b);
    // int caso5[] = {3, 1, 2};
    // probar_caso(&info, caso5, 3, "CASO 5: Lista pequeña [3, 1, 2]");
    
    // // CASO 6: Lista con 2 elementos
    // init_info(&info, &stack_a, &stack_b);
    // int caso6[] = {2, 1};
    // probar_caso(&info, caso6, 2, "CASO 6: Dos elementos [2, 1]");
    
    // // CASO 7: Lista con 1 elemento (caso borde)
    // init_info(&info, &stack_a, &stack_b);
    // int caso7[] = {42};
    // probar_caso(&info, caso7, 1, "CASO 7: Un elemento [42]");
    
    // CASO 8: Lista más grande para ver rendimiento
    init_info(&info, &stack_a, &stack_b);
    int caso8[] = {9, 3, 7, 1, 8, 2, 6, 4, 5, 10, 15, 12, 14, 11, 13};
    probar_caso(&info, caso8, 15, "CASO 8: Lista mediana [9,3,7,1,8,2,6,4,5,10,15,12,14,11,13]");
    
    printf("\n========================================\n");
    printf("     FIN DE LAS PRUEBAS\n");
    printf("========================================\n");
    
    return 0;
}