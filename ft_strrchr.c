/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:18:26 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/28 14:56:06 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	car;

	i = ft_strlen(s);
	car = (char)c;
	while (i >= 0)
	{
		if (s[i] == car)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
