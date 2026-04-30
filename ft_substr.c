/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:27:50 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/24 13:28:31 by nedo-nas         ###   ########.fr       */
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
// int	main(void)
// {
// 	char *result;

// 	// Caso 1: normal
// 	result = ft_substr("Hello World", 6, 5);
// 	printf("1: %s\n", result); // World
// 	free(result);

// 	// Caso 2: len maior que o resto da string
// 	result = ft_substr("Hello", 2, 10);
// 	printf("2: %s\n", result); // llo
// 	free(result);

// 	// Caso 3: start no fim da string
// 	result = ft_substr("Hello", 5, 3);
// 	printf("3: %s\n", result); // ""
// 	free(result);

// 	// Caso 4: start maior que a string
// 	result = ft_substr("Hello", 10, 3);
// 	printf("4: %s\n", result); // ""
// 	free(result);

// 	// Caso 5: len = 0
// 	result = ft_substr("Hello", 2, 0);
// 	printf("5: %s\n", result); // ""
// 	free(result);

// 	// Caso 6: string vazia
// 	result = ft_substr("", 0, 5);
// 	printf("6: %s\n", result); // ""
// 	free(result);

// 	// Caso 7: string completa
// 	result = ft_substr("42 Porto", 0, 8);
// 	printf("7: %s\n", result); // 42 Porto
// 	free(result);

// 	return (0);
// }
