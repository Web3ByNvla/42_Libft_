/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:42:53 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/10 17:03:38 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "stdlib.h"
#include "stdio.h"

char	*ft_itoa(int n)
{
	char	*buffer;
	int		len;
	int		nbr;
	int		i;
	int		len_final;
	
	i = 0;
	len = 1;
	nbr = n;
	while(nbr > 10)
	{
		nbr = nbr / 10;
		len++;
	}
	len_final = len;
	buffer = malloc(sizeof(char) * len + 1);
	if (!buffer)
		return (NULL);
		nbr = n;
	while(i < len)
	{
		buffer[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		printf("%s\n", buffer);
		i++;
	}
	i = 0;
	while (len_final > 0)
	{
		buffer[len_final] = buffer[i];
		len_final--;
		i++;
	}
	//buffer[i] = '\0';
	return (buffer);
}

int	main()
{
	char *buffer = ft_itoa(75500);
	printf("%s", buffer);
	free(buffer);
	return (0);
	
}