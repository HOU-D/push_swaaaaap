/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:11:13 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/04/11 20:58:57 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

 void	free_tablet(char **a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	free(a);
}

int	arg_to_intt(char **arg, t_list **a)
{
	int	j;
	int	tmp;

	j = 0;
	while (arg[j])
	{
		if (ft_checck(arg[j]) == 0)
			return(0);
		else
		{
			tmp = ft_atoi(arg[j]);
			if (arg_to_at(tmp, a) == 0)
			    return(0);
			j++;
		}
	}
	return (1);
}



int	initialisation(int ac, char **av, t_list **a)
{
	char	**arg;
	int		i;

	i = 1;
	while (i < ac)
	{
		arg = ft_split(av[i++], ' ');
		if (!arg[0])
			return(0);
		if (arg_to_intt(arg, a) == 0)
			return(0);
			
		free_tablet(arg);
	}
	return (1);
}