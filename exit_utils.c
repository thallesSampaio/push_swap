/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:57:34 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/11 12:59:39 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_clear(t_stack *a);

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	exit_clear(t_stack *a)
{
	stack_clear(a);
	exit(1);
}
