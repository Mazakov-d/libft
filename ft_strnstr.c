/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazari <dmazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:16:38 by dmazari           #+#    #+#             */
/*   Updated: 2024/11/07 14:48:23 by dmazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i_big;
	size_t	i_little;
	size_t	save;

	if (!little[0] || len == 0)
		return ((char *)big);
	i_big = 0;
	while (big[i_big])
	{
		i_little = 0;
		if (big[i_big] == little[i_little])
		{
			save = i_big;
			while (big[i_big + i_little] == little[i_little]
				&& i_little < len && little[i_little])
				i_little++;
			if (i_little == len)
				return ((char *)big + save);
		}
		i_big++;
	}
	return (NULL);
}
/* int	main()
{
	char	*big = "";
	char	*little = "";
	size_t	len = 10;

	printf("%s", ft_strnstr(big, little, len));
} */