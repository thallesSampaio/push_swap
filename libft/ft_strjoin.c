/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:22:29 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/04 12:06:36 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	total_len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *)malloc((total_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (s1[i] != 0)
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
/*
int	main(void)
{
	char    sub[10] = "luana";
	char    sub2[10] = "silva";
	printf("%s\n", ft_strjoin(sub, sub2));
}*/
