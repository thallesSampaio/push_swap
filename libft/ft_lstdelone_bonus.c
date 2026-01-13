/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:53:36 by thasampa          #+#    #+#             */
/*   Updated: 2025/11/04 12:09:27 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst -> content);
	free(lst);
}
/*
void del(void *content)
{
    free(content);
    printf("delete called!\n");
}

int main(void)
{
    char *str = malloc(8); //we need to malloc cause lstnew function malloc
                           // space for the list
                           //and dont malloc space for the string that
                           //content will recive
    if (!str)
        return (1);
    ft_strlcpy(str, "goodbye", 8);

    t_list *lst = ft_lstnew(str);
    printf("%s\n", lst->content);

    ft_lstdelone(lst, del);
}*/
