/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 21:30:53 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/12 22:24:30 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	max_bits(int max_num)
{
	int	bits;

	bits = 0;
	while ((max_num >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	size;
	int	bits;

	if (!a || a->size < 2)
		return ;
	bits = max_bits(a -> size - 1);
	i = 0;
	while (i < bits)
	{
		size = a -> size;
		j = 0;
		while (j++ < size)
		{
			if (((a -> head -> index >> i) & 1) == 0)
				pb(a, b);
			else
				ra(a);
		}
		while (b -> size)
			pa(a, b);
		i++;
	}
}
