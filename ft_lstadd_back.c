/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:30:15 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/29 12:15:30 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nexto;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		nexto = ft_lstlast(*lst);
		nexto->next = new;
	}
}
