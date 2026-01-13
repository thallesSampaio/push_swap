/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:21:17 by thasampa          #+#    #+#             */
/*   Updated: 2025/10/25 13:37:42 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == 0)
		return ((char *)big);
	while ((big[i] != 0) && (i < len))
	{
		j = 0;
		while ((big[i + j] == little[j])
			&& (big[i + j] != 0) && (little[j] != 0)
			&& ((i + j) < len))
			j++;
		if (j == ft_strlen(little))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	txt[50] = "test from silva";
	
	printf("%s\n", ft_strnstr(txt, '\0', 20));
	printf("%s\n", ft_strnstr(txt, "from", 20));
	printf("%s\n", ft_strnstr(txt, "almeria", 20));
	printf("%s\n", ft_strnstr(txt, "from", 4));
}*/
