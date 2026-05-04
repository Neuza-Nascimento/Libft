/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:05:25 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/28 10:17:46 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*nexto;

	i = 0;
	nexto = lst;
	while (nexto)
	{
		nexto = nexto->next;
		i++;
	}
	return (i);
}
