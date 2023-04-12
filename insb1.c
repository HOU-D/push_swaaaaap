/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insb1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:03:09 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/04/11 21:03:26 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!*b || ft_lstsize(*b) < 1)
		return ;
	tmp = (*b);
	(*b) = (*b)->next;
	tmp->next = NULL;
	ft_lstadd_front(a, tmp);
	
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!*a || ft_lstsize(*a) < 1)
		return ;
	tmp = (*a);
	(*a) = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_front(b, tmp);
	
}

void    rra(t_list **a)
{
    t_list  *tmp;
    t_list  *tmp1;

    if (!(*a) || ft_lstsize(*a) < 2)
        return ;
    tmp = (*a);
    while (tmp->next->next)
        tmp = tmp->next;
    tmp1 = tmp->next;
    tmp->next = NULL;
    tmp1->next = NULL;
    ft_lstadd_front(a, tmp1);
   
    return ;
}

void    rrb(t_list **b)
{
    t_list  *tmp;
    t_list  *tmp1;

    if (!(*b) || ft_lstsize(*b) < 2)
        return ;
    tmp = (*b);
    while (tmp->next->next)
        tmp = tmp->next;
    tmp1 = tmp->next;
    tmp->next = NULL;
    tmp1->next = NULL;
    ft_lstadd_front(b, tmp1);
   
    return ;
}

void    rrr(t_list**a, t_list **b)
{
	if (!(*a) || ft_lstsize(*a) < 2 || !(*b) || ft_lstsize(*b) < 2)
		return ;
    rra(a);
    rrb(b);
  
}
