/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:28:36 by thasampa          #+#    #+#             */
/*   Updated: 2025/10/23 19:45:00 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen((char *)dst);
	src_len = ft_strlen((char *)src);
	if (dstsize == 0)
		return (dstsize + src_len);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	if (dstsize > dst_len)
	{
		while (src[i] != 0 && i < (dstsize - dst_len) - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = 0;
	}
	return (dst_len + src_len);
}
/*
int main()
{
    char test[50] = "fods";
    char test2[50] = "123456789";
    char test3[50] = "fods";
    char test4[50] = "123456789";
    printf("%d\n", ft_strlcat(test, test2, 1));
    printf("%s\n", test);
    printf("%d\n", strlcat(test3, test4, 1));
    printf("%s\n", test3);
}*/
