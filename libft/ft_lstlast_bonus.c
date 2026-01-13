/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:30:05 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/03 15:15:45 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	while (tmp -> next != NULL)
		tmp = tmp -> next;
	return (tmp);
}
/*
int     main(void)
{
        t_list  *lst = ft_lstnew("your function");
        t_list  *new = ft_lstnew("has more than");
        t_list  *new2 = ft_lstnew("25 lines");
        t_list  *last;
        ft_lstadd_front(&lst, new);
        ft_lstadd_front(&lst, new2);
        last = ft_lstlast(lst);
        printf("%s\n", last -> content);
}*/
