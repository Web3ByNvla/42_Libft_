/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novella <novella@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:49:38 by novella           #+#    #+#             */
/*   Updated: 2026/11/09 22:04:17 by novella          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		size;
	size_t		len_s1;
	size_t		len_s2;
	size_t		i;
	char	*buffer;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	size = len_s1 + len_s2;
	i = 0;
	buffer = malloc(sizeof(char) * size + 1);
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
    	buffer[i] = s1[i];
    	i++;
	}
	i = 0;
	while (i < len_s2)
	{
    	buffer[i + len_s1] = s2[i];
    	i++;
	}
	buffer[i + len_s1] = '\0';
	return (buffer);
}