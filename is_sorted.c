/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 12:42:59 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/11 13:29:35 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	t_node	*cur;

	if (!a || a -> size < 2)
		return (1);
	cur = a -> head;
	while (cur && cur -> next)
	{
		if (cur -> value > cur -> next -> value)
			return (0);
		cur = cur -> next;
	}
	return (1);
}
