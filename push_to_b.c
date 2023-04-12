/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:59:35 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/04/04 19:59:35 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_elem_index(t_list *a, int start, int end)
{
    int i;

    i = 0;
    while (a)
    {
        if (a->data >= start && a->data <= end)
            return (i);
        a = a->next;
        i++;
    }
    return (-1);
}

static void y(t_list **a, t_list **b, int *T, int start, int end, int mid, int offset, int size)
{
    int elem_index;
    int i;
    
    i = 0;
    while (*a)
    {
        elem_index = get_elem_index(*a, T[start], T[end]);
        while (elem_index != -1)
        {
            i = -1;
            if (elem_index <= size / 2)
                while (++i < elem_index)
                    ra(a);
            else
                while (++i <= size - elem_index)
                    rra(a);
            pb(a, b);
            if ((*b)->data < T[mid])
                rb(b);
            elem_index = get_elem_index(*a, T[start], T[end]);
        }
        start -= offset;
        end += offset;
        if (start < 0)
            start = 0;
        if (end >= size)
            end = size - 1;
    }
}

void push_to_b(t_list **a, t_list **b, int div)
{
    int size;
    int mid;
    int offset;
    int start;
    int end;
    int *T;

    size = ft_lstsize(*a);
    mid = (size / 2) - 1;
    offset = size / div;
    start = mid - offset;
    end  = mid + offset;
    T = tab_list(a, size);
    tri_selection(T, size);
    y(a, b, T,  start,  end,  mid, offset, size);
    // while (*a)
    // {
    //     elem_index = get_elem_index(*a, T[start], T[end]);
    //     while (elem_index != -1)
    //     {
    //         i = -1;
    //             if (elem_index <= size / 2)
    //                 while (++i < elem_index)
    //                     ra(a);
    //             else
    //                 while (++i <= size - elem_index)
    //                     rra(a);
    //         pb(a, b);
    //         if ((*b)->data < T[mid])
    //             rb(b);
    //         elem_index = get_elem_index(*a, T[start], T[end]);
    //     }
    //     start -= offset;
    //     end += offset;
    //     if (start < 0)
    //         start = 0;
    //     if (end >= size)
    //         end = size - 1;
    // }
} 
