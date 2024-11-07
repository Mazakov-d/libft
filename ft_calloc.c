/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazari <dmazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:49:15 by dmazari           #+#    #+#             */
/*   Updated: 2024/11/07 16:22:08 by dmazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*a;

	i = 0;
	if (nmemb > 2147483647 / size)
		return (NULL);
	a = malloc(nmemb * size);
	if (!a)
		return (NULL);
	while (i < nmemb * size)
	{
		*(char *)(a + i) = 0;
		i++;
	}
	return (a);
}
