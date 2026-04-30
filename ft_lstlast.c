/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:22:23 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/23 17:09:30 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nexto;

	nexto = lst;
	if (!lst)
		return (NULL);
	while (nexto->next != NULL)
	{
		nexto = nexto->next;
	}
	return (nexto);
}
