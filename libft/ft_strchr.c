/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:13:47 by thasampa          #+#    #+#             */
/*   Updated: 2025/10/23 20:18:25 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != 0)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	if ((unsigned char)c == 0)
		return (&str[i]);
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strchr("tds", 'b'));
	printf("%s\n", strchr("tds", 'b'));
}*/
