/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:13:45 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/04 19:38:24 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		count;

	count = 0;
	if (!lst)
		return (0);
	tmp = lst;
	while (tmp != NULL)
	{
		tmp = tmp -> next;
		count++;
	}
	return (count);
}
/*
int     main(void)
{
        t_list  *lst = ft_lstnew("newlist");
        t_list  *new = ft_lstnew("newNode");
        t_list  *new2 = ft_lstnew("newNode2");
        ft_lstadd_front(&lst, new);
        ft_lstadd_front(&lst, new2);
        printf("%d\n", ft_lstsize(lst));
}*/
