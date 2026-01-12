/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 20:18:44 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/11 21:08:47 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_2(t_stack *a);
static void	sort_3(t_stack *a);
static void	sort_5(t_stack *a, t_stack *b);

void	simple_sort(t_stack *a, t_stack *b)
{
	if (!a || a -> size < 2 || is_sorted(a))
		return ;
	if (a -> size == 2)
		sort_2(a);
	else if (a -> size == 3)
		sort_3(a);
	else if (a -> size <= 5)
		sort_5(a, b);
}

static void	sort_2(t_stack *a)
{
	int	x;
	int	y;

	x = a -> head -> value;
	y = a -> tail -> value;
	if (x > y)
		sa(a);
}

static void	sort_3(t_stack *a)
{
	int	x;
	int	y;
	int	z;

	x = a -> head -> value;
	y = a -> head -> next -> value;
	z = a -> tail -> value;
	if (x > y && y < z && x < z)
		sa(a);
	else if (x > y && y > z)
	{
		sa(a);
		rra(a);
	}
	else if (x > y && y < z && x > z)
		ra(a);
	else if (x < y && y > z && x < z)
	{
		sa(a);
		ra(a);
	}
	else if (x < y && y > z && x > z)
		rra(a);
}

static void	sort_5(t_stack *a, t_stack *b)
{
	int	pos;

	if (!a || a -> size < 2)
		return ;
	while (a -> size > 3)
	{
		pos = find_min_pos(a);
		bring_pos_to_top(a, pos);
		pb(a, b);
	}
	sort_3(a);
	while (b -> size > 0)
		pa(a, b);
}
