/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dorianmazari <dorianmazari@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:32:04 by dmazari           #+#    #+#             */
/*   Updated: 2024/11/12 00:12:52 by dorianmazar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	save;

	i = 0;
	if ((unsigned char)c == 0)
		return ((char *)(s + ft_strlen(s)));
	save = -1;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			save = i;
		i++;
	}
	if (save == -1)
		return (NULL);
	return ((char *)(s + save));
}
