/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insb2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:04:10 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/04/11 21:04:25 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra(t_list **a)
{
	t_list	*tmp;

	if (!(*a) || ft_lstsize(*a) < 2)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_back(a, tmp);

	return;
}

void	rb(t_list **b)
{
	t_list	*tmp;

	if (!(*b) || ft_lstsize(*b) < 2)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = NULL;
	ft_lstadd_back(b, tmp);

	return;
}

void	rr(t_list **a, t_list **b)
{
	if (!(*a) || ft_lstsize(*a) < 2 || !(*b) || ft_lstsize(*b) < 2)
		return;
	ra(a);
	rb(b);

}

