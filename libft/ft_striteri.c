/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:51:13 by thasampa          #+#    #+#             */
/*   Updated: 2025/10/30 18:57:18 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != 0)
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	to_upper_iter(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 97 && *c <= 122)
		*c = *c - 32;
}

int	main(void)
{
	char	str[50] = "how to test";
	ft_striteri(str, to_upper_iter);
	printf("%s\n", str);
}*/
