/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:42:27 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/28 15:41:18 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	j = 0;
	i = ft_strlen(s1) - 1;
	while (s1[j] && is_set(set, s1[j]))
		j++;
	while (i > j && is_set(set, s1[i]))
		i--;
	if (i < j)
		return (ft_strdup(""));
	str = (char *)malloc(((i - j + 2)) * sizeof(char));
	if (!str)
		return (NULL);
	k = 0;
	while (j <= i)
		str[k++] = s1[j++];
	str[k] = '\0';
	return (str);
}
