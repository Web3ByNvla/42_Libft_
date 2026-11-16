/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:58:02 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/16 11:56:03 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*buffer;

	buffer = NULL;
	i = 0;
	if (!s || !f)
		return (buffer);
	buffer = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!buffer)
		return (NULL);
	while (s[i])
	{
		buffer[i] = f(i, *(char *)&s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
