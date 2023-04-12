/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:40:50 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/04/11 21:06:32 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_atoi(const	char	*str)
{
	int				i;
	int				sig;
	size_t			r;

	r = 0;
	sig = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
	{
		sig = sig * (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0' )
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * sig);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char			*cp;
	unsigned int	i;

	i = 0;
	cp = (char *)malloc(sizeof (char) * (ft_strlen(s1) + 1));
	if (!cp)
		return (NULL);
	while (s1[i] != '\0')
	{
		cp[i] = s1[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*st;

	j = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > ft_strlen((char *)s) - start)
		len = ft_strlen((char *)s) - start;
	st = (char *)malloc(len + 1);
	if (!st)
		return (NULL);
	i = start;
	while (start < len + i && s[start] != '\0')
	{
		st[j] = s[start];
		j++;
		start++;
	}
	st[j] = '\0';
	return (st);
}

