/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:10:39 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/04/11 21:12:28 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	arg_to_at(int valeur, t_list **a)
{
	t_list	*tmp;
	t_list	*new;

	tmp = (*a);
	while (tmp)
	{
		if (tmp->data == valeur)
			return (0);
		tmp = tmp->next;
	}
	new = ft_lstnew(valeur);
	ft_lstadd_back(a, new);
	return (1);
}

int	check_is_sorted(t_list **a)
{
	t_list	*temp;

	temp = (*a);
	while (temp->next)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	is_digitt(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
} 
int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	if (!s1)
		return (1);
	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i]-s2[i]);
}
