/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 09:21:50 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/09 09:32:50 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while(s1[i] && s2[i] && s1[i]== s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char) s1[i] - (unsigned char)s2[i]);
}
