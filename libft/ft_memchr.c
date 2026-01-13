/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:07:22 by thasampa          #+#    #+#             */
/*   Updated: 2025/10/24 20:30:58 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_cast;

	i = 0;
	s_cast = (unsigned char *)s;
	while (i < n)
	{
		if (s_cast[i] == (unsigned char)c)
			return (&s_cast[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	text[50] = "sprint";
	char	*r = ft_memchr(text, 'i', 6);
	char	*r2 = memchr(text, 'i', 6);
	printf("%s\n", r);
	printf("%s\n", r2);
}*/
