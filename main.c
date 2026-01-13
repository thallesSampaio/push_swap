/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 13:50:10 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/12 22:01:48 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	stack_init(&a);
	stack_init(&b);
	if (argc < 2)
		exit(1);
	if (parse_args(&a, argv) == 0)
		error_exit();
	if (is_sorted(&a))
		exit_clear(&a);
	sort_dispatcher(&a, &b);
	stack_clear(&a);
	stack_clear(&b);
	return (0);
}
