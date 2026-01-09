/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:00:00 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/08 21:31:30 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int		size;
	t_node	*head;
	t_node	*tail;
}	t_stack;

//parse_args
void	free_split(char **split);
int		parse_args(t_stack *a, char **args);

//str_validator
int		is_valid_int(const char *s, int *out);
int		is_str_valid(const char *str);

//stack_utils
int		has_duplicate(t_stack *a, int value);
void	stack_add_back(t_stack *a, int value);
void	stack_clear(t_stack *a);
void	stack_init(t_stack *a);

//fill_stack_ints
int		fill_stack_ints(t_stack *a, char **splited);

//debug
void	print_stack(t_stack *a);

//push_utils
void	error_exit(void);
#endif
