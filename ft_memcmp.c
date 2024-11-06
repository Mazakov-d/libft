/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazari <dmazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:55:31 by dmazari           #+#    #+#             */
/*   Updated: 2024/11/06 18:04:00 by dmazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;
	size_t			i;

	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	i = 0;
	while (temp_s1[i] && temp_s2[i] && temp_s1 == temp_s2 && i < n)
		i++;
	return (temp_s1[i] - temp_s2[i]);
}
