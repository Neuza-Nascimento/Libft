/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:19:53 by nedo-nas          #+#    #+#             */
/*   Updated: 2026/04/23 16:42:20 by nedo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c);
static void	*free_all(char **strs, int words);
static char	**malloc_words(char **strs, const char *s, char c, int words);

static void	*free_all(char **strs, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(strs[i]);
	}
	free(strs);
	return ((void *)0);
}

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i - 1] == c || i == 0) && str[i] != c)
			j++;
		i++;
	}
	return (j);
}

static char	**malloc_words(char **strs, const char *s, char c, int words)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != 0)
	{
		j = 0;
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			return (0);
		while (s[i + j] != c && s[i + j])
			j++;
		strs[k] = (char *)malloc((j + 1) * sizeof(char));
		if (!strs[k])
			return (free_all(strs, words));
		j = 0;
		while (s[i] != c && s[i])
			strs[k][j++] = s[i++];
		strs[k][j] = 0;
		k++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	strs = (char **)malloc((words + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	malloc_words(strs, s, c, words);
	strs[words] = 0;
	return (strs);
}
// int	main(void)
// {
// 	char **result;
// 	int i = 0;
// 	char *str = " ola mundo 42 Lisboa ";
// 	result = ft_split(str, ' ');
// 	if (!result)
// 	{
// 		printf("Erro no split\n");
// 		return (1);
// 	}
// 	while (result[i])
// 	{
// 		printf("Palavra %d: [%s]\n", i, result[i]);
// 		i++;
// 	}
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }