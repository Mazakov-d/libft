/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dorianmazari <dorianmazari@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:42:00 by dorianmazar       #+#    #+#             */
/*   Updated: 2024/11/05 15:56:14 by dorianmazar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;

    if (!b || !len)
        return (NULL);
    i = 0;
    while (i < len)
    {
        *(unsigned char *)(b + i) = (unsigned char)c;
        i++;
    }
    return (b);
}