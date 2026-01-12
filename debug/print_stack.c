/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 21:20:55 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/08 21:31:51 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *a)
{
	t_node	*cur;
	int		i;

	cur = a -> head;
	i = 0;
	printf("Stack A (size = %d):\n", a -> size);
	while (cur)
	{
		printf("[%d] value = %d\n", cur -> index, cur -> value);
		cur = cur ->next;
		i++;
	}
}
