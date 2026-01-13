/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:10:04 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/04 12:06:55 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	to_trim(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	while (s1[start] != 0 && (to_trim(s1[start], set) == 1))
		start++;
	while (end > start && (to_trim(s1[end - 1], set) == 1))
		end--;
	return (ft_substr(s1, start, (end - start)));
}

static int	to_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char *res;
	res = ft_strtrim("  \t\nHello World! \n\t  ", " \n\t");
	printf("'%s'\n", res);
}*/
