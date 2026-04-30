/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:49:13 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/24 13:13:18 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		total;

	if (!size || !nmemb)
		return (malloc(0));
	total = nmemb * size;
	if (total / nmemb != size)
		return (NULL);
	ptr = (void *)malloc(total);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, total);
	return (ptr);
}
// int	main(void)
// {
// 	void	*d;

//     d = ft_calloc(10, 1);
// 	printf("%s", (char *)d);
// 	return (0);
// }