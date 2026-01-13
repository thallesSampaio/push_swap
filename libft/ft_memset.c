/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:15:54 by thasampa          #+#    #+#             */
/*   Updated: 2025/10/24 22:15:35 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str_cast;
	size_t			i;

	i = 0;
	str_cast = (unsigned char *)str;
	while (i < n)
	{
		str_cast[i] = (unsigned char)c;
		i++;
	}
	return (str_cast);
}
/*
int	main(void)
{
	char str[50];
	strcpy(str, "thalles");
	puts(str);	
	ft_memset(str, 122, 2); 
	puts(str);

}*/
