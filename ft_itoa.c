/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:42:53 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/16 10:58:44 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	long_len(long nbr)
{
	int		len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		len;
	long	nbr;

	nbr = n;
	len = long_len(nbr);
	buffer = malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	buffer[len] = '\0';
	len--;
	if (nbr < 0)
	{
		buffer[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		buffer[0] = '0';
	while (len > 0)
	{
		buffer[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (buffer);
}
