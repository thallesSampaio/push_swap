/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:49:37 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/02 18:30:56 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	number_length(long nb);

char	*ft_itoa(int n)
{
	char	*dest;
	int		nb_len;
	long	nb;

	nb = n;
	nb_len = number_length(nb);
	dest = (char *)malloc((nb_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	if (nb == 0)
		dest[0] = 48;
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	dest[nb_len] = 0;
	while (nb != 0)
	{
		dest[--nb_len] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (dest);
}

static int	number_length(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	if (nb == 0)
		count++;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	//printf("%s\n", ft_itoa(42));
	//printf("%s\n", ft_itoa(0));
	//printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-1));
}*/
