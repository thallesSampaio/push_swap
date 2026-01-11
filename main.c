/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 13:50:10 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/11 19:35:12 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_clear(t_stack *a); //remover
void	print_content(void *content); // remover
void	error_exit(void);
void	exit_clear(t_stack *a);
int		parse_args(t_stack *a, char **args);
int		is_sorted(t_stack *a);
void	sa(t_stack *a);

int	main(int argc, char *argv[])
{
	t_stack	a;

	if (argc < 2)
		return (0);
	if (parse_args(&a, argv) == 0)
		error_exit();
	if (is_sorted(&a))
		exit_clear(&a);
	print_stack(&a);// remover
	stack_clear(&a);// remover
	return (0);
}
