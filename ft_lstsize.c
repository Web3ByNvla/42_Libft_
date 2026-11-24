/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:21:44 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/24 10:45:31 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int		count_lst;

	if (!lst)
		return (0);
	count_lst = 0;
	while (lst != NULL)
	{
		count_lst++;
		lst = lst->next;
	}
	return (count_lst);
}
