/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazari <dmazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:31:15 by dmazari           #+#    #+#             */
/*   Updated: 2024/11/06 14:39:03 by dmazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i_dst;
	size_t	i_src;
	size_t	i;

	i_src = ft_strlen(src);
	i_dst = ft_strlen(dst);
	i = 0;
	while (i < size - 1)
	{
		dst[i_dst + i] = src[i];
		i++;
	}
	dst[i_dst + i] = '\0';
	return (i_dst + i_src);
}
