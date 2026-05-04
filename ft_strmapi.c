/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 09:58:02 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/29 11:01:15 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*str;

	if (!s)
		return (NULL);
	i = ft_strlen(s) + 1;
	str = (char *)malloc(i * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (j < i - 1)
	{
		str[j] = f(j, s[j]);
		j++;
	}
	str[j] = 0;
	return (str);
}
