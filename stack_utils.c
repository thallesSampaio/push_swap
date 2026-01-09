/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 20:45:29 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/08 21:28:44 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(t_stack *a)
{
	a -> size = 0;
	a -> head = NULL;
	a -> tail = NULL;
}

void	stack_clear(t_stack *a)
{
	t_node	*cur;
	t_node	*next;

	cur = a -> head;
	while (cur)
	{
		next = cur -> next;
		free (cur);
		cur = next;
	}
	a -> head = NULL;
	a -> tail = NULL;
	a -> size = 0;
}

void	stack_add_back(t_stack *a, int value)
{
	t_node	*n;

	n = (t_node *)malloc(sizeof(t_node));
	if (!n)
		error_exit();
	n -> value = value;
	n -> index = -1;
	n -> next = NULL;
	if (a -> size == 0)
	{
		a -> head = n;
		a -> tail = n;
	}
	else
	{
		a -> tail -> next = n;
		a -> tail = n;
	}
	a -> size++;
}

int	has_duplicate(t_stack *a, int value)
{
	t_node	*cur;

	cur = a -> head;
	while (cur)
	{
		if (cur -> value == value)
			return (1);
		cur = cur -> next;
	}
	return (0);
}
