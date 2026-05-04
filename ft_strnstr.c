/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:35:59 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/27 18:19:42 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < len && big[i + j])
				j++;
			if (little[j] == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
