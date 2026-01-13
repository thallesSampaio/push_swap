/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:25:07 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/04 15:51:33 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *src)
{
	int	i;
	int	sign;
	int	sum;

	sign = 1;
	sum = 0;
	i = 0;
	while ((src[i] >= 9 && src[i] <= 13) || (src[i] == 32))
		i++;
	if (src[i] == 43 || src[i] == 45)
	{
		if (src[i] == 45)
			sign *= -1;
		i++;
	}
	while (src[i] >= 48 && src[i] <= 57)
	{
		sum = (sum * 10) + (src[i] - '0');
		i++;
	}
	return (sign * sum);
}
