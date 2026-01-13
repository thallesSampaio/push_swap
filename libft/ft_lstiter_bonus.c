/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:15:06 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/04 19:38:20 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp != NULL)
	{
		(*f)(tmp -> content);
		tmp = tmp -> next;
	}
}
/*
void    print_content(void *content)
{
        ft_putstr_fd((char *)content, 1);
        ft_putchar_fd('\n', 1);
}

int     main(void)
{
        t_list  *lst = ft_lstnew("your function");
        ft_lstiter(lst, print_content);
}*/
