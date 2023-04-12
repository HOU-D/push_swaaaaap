/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a_outils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:12:59 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/04/11 23:57:25 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_index_max(t_list **pile)
{
    t_list  *tmp;
    int     max;
    int     index_min;

    indice(*pile);
    tmp = *pile;
    max = tmp->data;
    index_min = 0;
    while (tmp)
    {
        if (max < tmp->data)
        {
            max = tmp->data;
            index_min = tmp->index;
        }
        tmp = tmp->next;
    }
    return (index_min);
    }

int	last_data_a(t_list *pile)
{
	if (!pile)
		return (0);
	while (pile->next)
		pile = pile->next;
	return (pile->data);
}

int	get_max(t_list *pile)
{
	int	max;

	if (!pile)
		return (0);
	max = pile->data;
	while (pile)
	{
		if (max < pile->data)
			max = pile->data;
		pile = pile->next;
	}
	return (max);
}