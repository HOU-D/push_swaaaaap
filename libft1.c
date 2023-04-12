/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:47:39 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/04/11 21:06:43 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static	int	nbr_word(char const *s, char c)
{
	int	i;
	int	w;

	w = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			w++;
		i++;
	}
	return (w);
}

void	free_table(char **a)
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

static	char	**result(char const *s, char c, char **k, int i)
{
	int	j;
	int	l;
	int	d;

	l = 0;
	d = nbr_word (s, c);
	while (s[i] && l < d)
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			j++;
		}
		k[l++] = ft_substr (s, i - j, j);
		if (!k)
		{
			free_table (k);
			return (NULL);
		}
	}
	k[l] = 0;
	return (k);
}

char	**ft_split(char	const	*s, char c)
{
	char	**k;

	if (!s)
		return (NULL);
	k = (char **) malloc((1 + nbr_word(s, c)) * sizeof(char *));
	if (!k)
		return (NULL);
	return (result(s, c, k, 0));
}