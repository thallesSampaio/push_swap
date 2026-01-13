/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:08:43 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/03 19:49:54 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*src_cast;
	unsigned char		*dest_cast;
	size_t				i;

	i = 0;
	dest_cast = (unsigned char *)dest;
	src_cast = (unsigned const char *)src;
	if (dest_cast < src_cast)
	{
		while (i < n)
		{
			dest_cast[i] = src_cast[i];
			i++;
		}
	}
	else
		while (n--)
			dest_cast[n] = src_cast[n];
	return (dest_cast);
}
/*
int	main(void)
{
	char	test[50] = "1234567";
	char	test2[50] = "1234567";
	ft_memmove(test, test, 4);
	memmove(test2, test2, 4);
	printf("%s\n", test);
	printf("%s\n", test2);
}*/
