/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dorianmazari <dorianmazari@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:38:06 by dmazari           #+#    #+#             */
/*   Updated: 2025/02/18 23:46:04 by dorianmazar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp_s;

	temp_s = (unsigned char *)s;
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			if (temp_s[i] == (unsigned char)c)
				return ((void *)(s + i));
			i++;
		}
		if ((unsigned char)c == 0 && n >= ft_strlen(s))
			return ((void *)(s + ft_strlen(s)));
	}
	return (NULL);
}
