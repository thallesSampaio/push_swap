/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:42:42 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/04 12:08:53 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	tmp = ft_lstlast(*lst);
	if (tmp == NULL)
	{
		*lst = new;
		return ;
	}
	tmp -> next = new;
}
/*
int     main(void)
{
        t_list  *lst = ft_lstnew("your function");
        t_list  *new = ft_lstnew("has more than");
        t_list  *new2 = ft_lstnew("25 lines");
        t_list  *last;
        ft_lstadd_back(&lst, new2);
        ft_lstadd_front(&lst, new);
        last = ft_lstlast(lst);
        printf("%s\n", last -> content);
}*/
