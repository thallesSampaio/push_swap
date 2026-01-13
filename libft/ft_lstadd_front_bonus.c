/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:57:14 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/04 12:08:29 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*
int     main(void)
{
        t_list  *lst = ft_lstnew("your function");
        t_list  *new = ft_lstnew("has more than 25 lines");
        printf("%s\n", lst->content);
        ft_lstadd_front(&lst, new);
        printf("%s\n", new->content);
        printf("%s\n", lst->content);
}*/
