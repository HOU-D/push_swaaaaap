/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:01:34 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/04/11 22:00:19 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	min_puch_to_a_inf_mid(t_list **a, t_list **b,int *down)
{
	while (get_index_max(b))
	{
		if (!*down || last_data_a(*a) < (*b)->data)
		{
			pa(a, b);
			ra(a);
			(*down)++;
		}
		else
			rb(b);
	}
}

static	void	min_puch_to_a_sup_mid(t_list **a, t_list **b, int *down)
{
	while (get_index_max(b))
	{
		if (!*down || last_data_a(*a) < (*b)->data)
		{
			pa(a,b);
			ra(a);
			(*down)++;
		}
		else
			rrb(b);
	}
}

void	push_to_a(t_list **a, t_list **b)
{
	int	down;
	int	mid;

	down = 0;
	indice(*b);
	while (*b)
	{
		mid = ft_lstsize(*b) / 2;
		if (get_index_max(b) > mid)
			min_puch_to_a_sup_mid(a, b, &down);
		else
			min_puch_to_a_inf_mid(a, b, &down);
		pa(a,b);
		while (down && get_max(*b) < last_data_a(*a))
		{
			rra(a);
			down--;
		}
	}
	{
	while (down)
		rra(a);
		down--;
	}
}
