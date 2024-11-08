/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazari <dmazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:52:50 by dmazari           #+#    #+#             */
/*   Updated: 2024/11/08 17:29:48 by dmazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_nb(int n)
{
	int		count;
	char	*nb;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	nb = malloc(count + 1);
	if (!nb)
		return (NULL);
	return (nb);
}

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*nb;
	int		count;

	nb = ft_nb(n);
	if (!nb)
		return (NULL);
	count = ft_count(n);
	if (n < 0)
	{
		*nb = '-';
		nb++;
	}
	while (count > 0)
	{
		*nb = '0' + ((n / (10 * count)) % 10);
		count--;
		nb++;
	}
	*nb = 0;
	return (nb);
}
