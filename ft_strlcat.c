/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazari <dmazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:31:15 by dmazari           #+#    #+#             */
/*   Updated: 2024/11/08 11:58:00 by dmazari          ###   ########.fr       */
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
	if (size != 0)
	{
		while (i < size - 1 - i_dst && src[i])
		{
			dst[i_dst + i] = src[i];
			i++;
		}
		dst[i_dst + i] = '\0';
	}
	if (size < i_src)
		return (i_src + size);
	return (i_dst + i_src);
}
/* #include <string.h>
#include <bsd/string.h>
#include <stdio.h>


int main ()
{
	// char dst[20] = "";
	char	*dst = NULL;
	char dst1[20] = "";
	char *src = "salut les loulous";
	char *src1 = "salut les loulous";
	printf("%s\n", dst);
	size_t	i = strlcat(dst, src1, 4);
	size_t	i1 = ft_strlcat(dst1, src, 4);
	
	printf("%s \n %zu \n %s \n %zu", dst, i1, dst1, i);
} */