/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novella <novella@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:58:02 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/11 22:13:14 by novella          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*buffer;

	if (!s || !f)
		return (NULL);
	i = 0;
	buffer = malloc(sizeof(char) * ft_strlen(s));
	if (!buffer)
		return (NULL);
	while (s[i])
	{
		buffer[i] = f(i, *(char *)&s[i]);
		i++;
	}
	return (buffer);
}
