/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:26:37 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/04 12:08:09 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	dest = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i] != 0)
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
char	to_upper_alternative(unsigned int i, char c)
{
	(void)i;
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(void)
{
	printf("%s\n", ft_strmapi("how to test it?", to_upper_alternative));
}*/
