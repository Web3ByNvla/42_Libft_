/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:50:09 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/11 16:02:46 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{	
	t_list	*current;
	
	if (!lst || !del)
		return ;
	while(*lst != NULL)
	{
		current = *lst;
		*lst = current->next;
		del(current->content);
		free(current);
	}
}