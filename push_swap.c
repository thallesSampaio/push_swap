/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 13:50:10 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/07 13:50:28 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void    print_content(void *content);

int	main(int argc, char *argv[])
{
    t_list  *stack_a;
    t_list  *tmp;
    char    **split;
    char    *concat;
    int     i;
    int     *num;

    i = 1;
    concat = ft_strdup("");
    while (i < argc)
    {
        concat = ft_strjoin(concat, argv[i]);
        concat = ft_strjoin(concat, ft_strdup(" "));
        i++;
    } // recebe argumentos descaralhados, junta tudo identadinho pra splitar depois
    split = ft_split(concat, ' ');
    i = 0;
    stack_a = NULL;
    while (split[i] != NULL)
    {
        num = malloc(sizeof(int));
        *num = ft_atoi(split[i]);
        tmp = ft_lstnew(num);
        ft_lstadd_front(&stack_a, tmp);
        i++;
    }//itera sobre todo meu array de strings e passa tudo para uma lista
    ft_lstiter(stack_a, print_content);
    exit(1);
}

void print_content(void *content)
{
    int *n = (int *)content;
    ft_putnbr_fd(*n, 1);
    ft_putchar_fd('\n', 1);
}