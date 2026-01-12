/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 20:47:10 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/11 21:08:12 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_pos(t_stack *a)
{
	t_node	*cur;
	int		min;
	int		min_pos;
	int		i;

	cur = a -> head;
	min = cur -> value;
	min_pos = 0;
	i = 0;
	while (cur)
	{
		if (cur -> value < min)
		{
			min = cur -> value;
			min_pos = i;
		}
		cur = cur -> next;
		i++;
	}
	return (min_pos);
}

void	bring_pos_to_top(t_stack *a, int pos)
{
	int	moves;

	if (pos <= a -> size / 2)
	{
		moves = pos;
		while (moves-- > 0)
			ra(a);
	}
	else
	{
		moves = a -> size - pos;
		while (moves-- > 0)
			rra(a);
	}
}
