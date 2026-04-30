/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:10:02 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/24 14:02:53 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	i;

	len1 = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(len1 * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	len1 = -1;
	while (s1[++len1])
		str[len1] = s1[len1];
	while (s2[i])
		str[len1++] = s2[i++];
	str[len1] = 0;
	return (str);
}
// int	main(void)
// {
// 	char d[] = "AMOR e belo";
//     char a[] = "dA MINHA VIDA ";

// 	printf("%s", ft_strjoin(d, a));
// 	return (0);
// }