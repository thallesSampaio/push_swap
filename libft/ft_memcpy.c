/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:50:50 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/03 19:50:09 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cast;
	unsigned char const	*src_cast;
	size_t				i;

	i = 0;
	dest_cast = (unsigned char *)dest;
	src_cast = (unsigned const char *)src;
	while (i < n)
	{
		dest_cast[i] = src_cast[i];
		i++;
	}
	return (dest_cast);
}
/*
int	main(void)
{
	char	test[50];
	ft_memcpy(test, "123456", 3);
	printf("%s\n", test);
}*/
