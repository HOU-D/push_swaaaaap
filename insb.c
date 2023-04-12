/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:55:27 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/04/11 21:03:51 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_list **a)
{
	int	tmp;

	if (!*a || ft_lstsize(*a) < 2) 
		return ;
	tmp = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = tmp;

	return;
}

void	sb(t_list **b)
{
	int	tmp;

	if (!*b || ft_lstsize(*b) < 2)
		return ;
	tmp = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = tmp;
	
	return;
}

void	ss(t_list **a, t_list **b)
{
	if (!(*a) || ft_lstsize(*a) < 2 || !(*b) || ft_lstsize(*b) < 2)
		return ;
	sa(a);
	sa(b);

}

