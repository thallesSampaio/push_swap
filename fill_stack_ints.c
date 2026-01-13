/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_ints.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 20:54:16 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/13 01:17:52 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fill_stack_ints(t_stack *a, char **splited)
{
	int	i;
	int	val;

	i = 0;
	while (splited[i])
	{
		if (!is_str_valid(splited[i]) || !is_valid_int(splited[i], &val))
			return (0);
		if (has_duplicate(a, val))
			return (0);
		stack_add_back(a, val);
		i++;
	}
	return (1);
}
