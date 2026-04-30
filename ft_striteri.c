/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:22:28 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/22 10:28:18 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void ft_teste(unsigned int j, char *c)
// {
//     (void)j;
//     *c = '*';
// }
// int main()
// {
//     char a[] = "maria";
//     ft_striteri(a, ft_teste);
//     printf("%s", a);
// }