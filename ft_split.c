/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:19:53 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/05/01 17:19:43 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **strs, int words)
{
	while (words >= 0)
	{
		free(strs[words]);
		words--;
	}
	free(strs);
	return (NULL);
}

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			j++;
		while (str[i] != c && str[i])
			i++;
	}
	return (j);
}

static int	ft_strlen_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	**malloc_words(char **strs, const char *s, char c, int words)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (k < words)
	{
		while (*s == c)
			s++;
		j = ft_strlen_word(s, c);
		strs[k] = malloc(sizeof(char) * (j + 1));
		if (!strs[k])
			return (free_all(strs, k));
		i = 0;
		while (i < j)
			strs[k][i++] = *s++;
		strs[k][i] = '\0';
		k++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	strs = (char **)malloc((words + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	if (!malloc_words(strs, s, c, words))
		return (NULL);
	strs[words] = 0;
	return (strs);
}

// #include <stdio.h>

// int main (void)
// {
//     char **result;
//     int i;

//     i = 0;
//     result = ft_split("Eu sou a neuza", ' ');
//     if (!result)
//     {
//         printf("Falha na alocacao");
//         return (1);
//     }
//     while(result[i])
//     {
//         printf("Palava na posicao [%d] : %s \n", i, result[i]);
//         i ++;
//     }
//     i = 0;
//     while(result[i])
//     {
//         free(result[i]);
//         i ++;
//     }
//     free(result);
//     return(0);
// }