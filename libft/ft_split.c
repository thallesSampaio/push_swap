/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:21:37 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/02 18:36:24 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static char	**free_split(char **split);
static char	*fill_string(char const *split, int start, int len);
static int	count_word(char const *str, char sep);

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	i;
	size_t	start;
	size_t	word_i;

	dest = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	if (dest == NULL || !s)
		return (NULL);
	word_i = 0;
	i = 0;
	while (s[i] != 0)
	{
		while (s[i] == c && s[i] != 0)
			i++;
		start = i;
		while (s[i] != c && s[i] != 0)
			i++;
		if (i > start)
			dest[word_i++] = fill_string(s, start, (i - start));
	}
	if (!dest)
		return (free_split(dest));
	dest[word_i] = NULL;
	return (dest);
}

static int	count_word(char const *str, char sep)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		while (str[i] == sep && str[i] != 0)
			i++;
		if (str[i] == 0)
			return (count);
		count++;
		while (str[i] != sep && str[i] != 0)
			i++;
	}
	return (count);
}

static char	**free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i] != 0)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static char	*fill_string(char const *s, int start, int len)
{
	int		i;
	char	*split;

	split = (char *)malloc((len + 1) * sizeof(char));
	if (split == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		split[i] = s[start];
		start++;
		i++;
	}
	split[i] = 0;
	return (split);
}
/*
int	main(void)
{
	char	**dest;
	int	i,j;
	dest = ft_split("your function has more than 25 lines!", ' ');
	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		j = 0;
		printf("[");
		while (dest[i][j] != 0)
		{
			printf("%c", dest[i][j]);
			j++;
		}
		printf("]\n");
		i++;
	}
}*/
