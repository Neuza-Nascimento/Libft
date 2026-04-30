/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:44:54 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/29 15:37:53 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*d;

	if (!content)
		return (NULL);
	d = malloc(sizeof(t_list));
	if (!d)
		return (NULL);
	d->content = content;
	d->next = NULL;
	return (d);
}

// int main(void)
// {
// 	t_list *teste1;
// 	t_list *teste2;

// 	teste1 = ft_lstnew((void *)"teste1");
// 	teste2 = ft_lstnew((void *)"teste2");

// 	teste1->next = teste2;

// 	printf("%s", (char *)teste1->next->content);
// }