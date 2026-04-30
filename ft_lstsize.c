/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:05:25 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/23 15:14:49 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct s_list
// {
// 	char			*content;
// 	struct s_list	*next;
// }	t_list;

// t_list	*ft_lstnew(char *content)
// {
// 	t_list	*newlist;

// 	newlist = (t_list *)malloc(sizeof(t_list));
// 	if (!newlist)
// 		return (NULL);
// 	newlist->content = content;
// 	newlist->next = NULL;
// 	return (newlist);
// }

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
// int main()
// {
//     t_list *teste;
//     t_list *teste2;

//     teste = ft_lstnew("Ola");
//     teste2 = ft_lstnew("oiii");
//     teste->next = teste2;
//     printf("%d", ft_lstsize(teste));

// }