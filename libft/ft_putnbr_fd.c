/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:14:10 by thasampa          #+#    #+#             */
/*   Updated: 2025/10/30 19:18:24 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(nb + '0', fd);
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(42, 1);
	ft_putchar_fd(10, 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd(10, 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd(10, 1);
	ft_putnbr_fd(2147483647, 1);
}*/
