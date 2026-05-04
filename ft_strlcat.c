/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:12:45 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/29 11:01:21 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;
	int		i;

	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	if (size <= lendest)
		return (size + lensrc);
	while (src[i] && (lendest + 1 + i) < size)
	{
		dst[lendest + i] = src[i];
		i++;
	}
	dst[lendest + i] = '\0';
	return (lendest + lensrc);
}
