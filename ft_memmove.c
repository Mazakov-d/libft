/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazari <dmazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:42:59 by dorianmazar       #+#    #+#             */
/*   Updated: 2024/11/06 14:34:52 by dmazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (!tmp_src || !tmp_dst)
		return (NULL);
	if (src < dst)
	{
		while (len-- > 0)
			(tmp_dst)[len] = (tmp_src)[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			(tmp_dst)[i] = (tmp_src)[i];
			i++;
		}
	}
	return (dst);
}
