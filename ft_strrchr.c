/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazari <dmazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:32:04 by dmazari           #+#    #+#             */
/*   Updated: 2024/11/06 17:25:34 by dmazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	save;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			save = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return ((char *)(s + save));
}
