/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:49:13 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/29 10:50:34 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb != 0 && ((size_t)-1) / nmemb < size)
		return (NULL);
	total = nmemb * size;
	ptr = (void *)malloc(total);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, total);
	return (ptr);
}
