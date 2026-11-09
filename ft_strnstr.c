/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:31:31 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/09 14:12:46 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	y = 0;
	i = 0;
	while (big[i] && i < len)
	{
		y = i + 1;
		while(little[y])
		{
			if (little[y] == big[i])
				return (big[i]);
			y++;
		}
		i++;
	}
	return (NULL);
}
