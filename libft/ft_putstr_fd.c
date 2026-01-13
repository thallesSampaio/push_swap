/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:06:20 by thasampa          #+#    #+#             */
/*   Updated: 2025/10/30 19:10:30 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i] != 0)
		ft_putchar_fd(s[i++], fd);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putstr_fd(argv[1], 1);
}*/
