/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:27:50 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/28 11:17:16 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*final;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)s + start;
	if (ft_strlen(str) < len)
		i = ft_strlen(str) + 1;
	else
		i = len + 1;
	final = (char *)malloc(i * sizeof(char));
	if (!final)
		return (NULL);
	ft_strlcpy(final, str, i);
	return (final);
}
