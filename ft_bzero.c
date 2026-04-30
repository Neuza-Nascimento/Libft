/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:53:13 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/16 15:11:03 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return (s);
}
// #include <stdlib.h>

// int	main(void)
// {
// 	void	*a;

// 	a = malloc(12);
// 	ft_bzero(a, 12);
// 	write(1, a, 12);
// 	free(a);
// 	return (0);
// }
