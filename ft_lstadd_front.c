/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:56:41 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/22 18:01:16 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main()
// {
//     t_list *teste;
//     t_list *teste2;

//     teste = ft_lstnew("Ola");
//     printf("%s", teste->content);
//     teste2 = ft_lstnew("oiii");
//     printf("%s", teste2->content);
//     teste->next = teste2;
//     printf("%s", teste->next->content);

// } faltou escreveres parametros para o bzero