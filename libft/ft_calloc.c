/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:56:27 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/04 16:20:38 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdio.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num != 0 && size != 0 && num > (SIZE_MAX / size))
		return (NULL);
	if (num == 0 || size == 0)
		return (malloc(1));
	ptr = malloc(num * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}
/*
int	main(void)
{
	int	*arr;
	int	n = 5;
	int	i = 0;

	arr = (int *)calloc(n, sizeof(int));
	while (i < n)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	printf("%u\n", SIZE_MAX);
}*/
