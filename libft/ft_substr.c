/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:22:15 by thasampa          #+#    #+#             */
/*   Updated: 2025/10/27 15:20:56 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*dest;

	if (!s)
		return (NULL);
	if ((ft_strlen(s) - start) < len)
		size = ft_strlen(s) - start;
	else if (ft_strlen(s) <= start || len == 0)
		size = 0;
	else
		size = len;
	dest = (char *) malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
int	main(void)
{
	char	sub[50] = "luana";
	printf("%s\n", ft_substr(sub, 1, 6));
}*/
