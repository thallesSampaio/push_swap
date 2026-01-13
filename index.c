/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 21:00:26 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/12 21:04:46 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*array_with_content(t_stack *a);
static int	find_index(int value, int *array, int size);

void	index_stack(t_stack *a)
{
	int		*sorted;
	t_node	*cur;
	int		idx;

	if (!a || a->size < 2)
		return ;
	sorted = array_with_content(a);
	cur = a->head;
	while (cur)
	{
		idx = find_index(cur->value, sorted, a->size);
		cur->index = idx;
		cur = cur->next;
	}
	free(sorted);
}

static void	bubble_sort(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (tab[j] < tab[j - 1])
			{
				temp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = temp;
			}
			j++;
		}
		i++;
	}
}

static int	find_index(int value, int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (array[i] == value)
			return (i);
		i++;
	}
	error_exit();
	return (0);
}

static int	*array_with_content(t_stack *a)
{
	int		*array;
	int		i;
	t_node	*cur;

	if (!a || a->size == 0)
		return (NULL);
	array = (int *)malloc(sizeof(int) * a->size);
	if (!array)
		error_exit();
	i = 0;
	cur = a->head;
	while (cur)
	{
		array[i++] = cur->value;
		cur = cur->next;
	}
	bubble_sort(array, a->size);
	return (array);
}
