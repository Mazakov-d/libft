/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazari <dmazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:38:06 by dmazari           #+#    #+#             */
/*   Updated: 2024/11/07 13:20:33 by dmazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp_s;

	temp_s = (unsigned char *)s;
	i = 0;
	while (temp_s[i] && i < n)
	{
		if (temp_s[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return ((void *)(s + i));
}
