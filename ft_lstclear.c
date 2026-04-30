/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:21:06 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/29 17:54:00 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*current_next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		current_next = current->next;
		del(current->content);
		free(current);
		current = current_next;
	}
	*lst = NULL;
}
