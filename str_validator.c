/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_validator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 19:12:42 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/08 19:13:11 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_int(const char *s, int *out)
{
	long	num;
	int		sign;
	int		i;

	if (!is_str_valid(s))
		return (0);
	i = 0;
	sign = 1;
	num = 0;
	if (s[i] == 43 || s[i] == 45)
	{
		if (s[i] == 45)
			sign *= -1;
		i++;
	}
	while (s[i])
	{
		num = (num * 10) + (s[i] - '0');
		if ((sign == 1 && num > INT_MAX)
			|| (sign == -1 && num * sign < INT_MIN))
			return (0);
		i++;
	}
	*out = (int)(num * sign);
	return (1);
}

int	is_str_valid(const char *str)
{
	int	i;

	if (!str || str[0] == '\0')
		return (0);
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
