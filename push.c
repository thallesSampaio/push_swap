/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 14:18:57 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/12 22:19:03 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack *from, t_stack *to)
{
	t_node	*node;

	if (!from || from -> size == 0)
		return ;
	node = from -> head;
	from -> head = node -> next;
	from -> size--;
	if (from -> size == 0)
		from -> tail = NULL;
	node -> next = to -> head;
	to -> head = node;
	if (to -> size == 0)
		to -> tail = node;
	to -> size++;
}

void	pa(t_stack *a, t_stack *b)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	push(a, b);
	write(1, "pb\n", 3);
}
