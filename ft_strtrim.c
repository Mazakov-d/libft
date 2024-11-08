/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazari <dmazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:18:20 by dmazari           #+#    #+#             */
/*   Updated: 2024/11/08 16:48:23 by dmazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_search(set, s1[start]) == 1)
		start++;
	return (start);
}

static size_t	ft_end(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_search(set, s1[end]) == 1 && end > 0)
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!set)
		return ((char *)s1);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[start + i] && start + i <= end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
