/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazari <dmazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:18:20 by dmazari           #+#    #+#             */
/*   Updated: 2024/11/07 17:43:11 by dmazari          ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!set)
		return (s1);
	str = malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		if (ft_search(set, s1[j]) == 0)
		{
			str[i] = s1[j];
			i++;
		}
		j++;
	}
	str[i] = '\0';
	return (str);
}
