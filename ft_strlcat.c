/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:12:45 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/24 11:36:55 by nedo-nas         ###   ########.fr       */
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

// int	main(void)
// {
// 	char	d[] = "Amor e belo";
// 	char	s[10] = "Vida";

// 	ft_strlcat(s, d, 10);
// 	printf("%s", s);
// 	return (0);
// }
