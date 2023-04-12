/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:14:37 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/04/11 21:30:32 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	int	tmp;

	if (!*a || ft_lstsize(*a) < 2)
		return ;
	tmp = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = tmp;
	write(1, "sa\n", 3);
	return ;
}

void	sb(t_list **b)
{
	int	tmp;

	if (!*b || ft_lstsize(*b) < 2)
		return ;
	tmp = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = tmp;
	write(1, "sb\n", 3);
	return ;
}

void	ss(t_list **a, t_list **b)
{
	if (!(*a) || ft_lstsize(*a) < 2 || !(*b) || ft_lstsize(*b) < 2)
		return ;
	sa(a);
	sa(b);
	write(1, "ss\n", 3);
}

void	ra(t_list **a)
{
	t_list	*tmp;

	if (!(*a) || ft_lstsize(*a) < 2)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_back(a, tmp);
	write(1, "ra\n", 3);
	return ;
}