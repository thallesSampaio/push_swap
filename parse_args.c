/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasampa <thasampa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:47:16 by thasampa          #+#    #+#             */
/*   Updated: 2026/01/08 19:14:28 by thasampa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static char	*join_free(char *s1, char *s2);
void		error_exit(void);
void		free_split(char **split);

int	parse_args(char **args)
{
	char	**splited;
	char	*concat;
	char	*tmp;
	int		i;

	i = 0;
	concat = ft_strdup("");
	if (!concat)
		return (0);
	while (args[++i])
	{
		concat = join_free(concat, args[i]);
		concat = join_free(concat, " ");
	}
	splited = ft_split(concat, ' ');
	free(concat);
	if (!splited)
		return (0);
	i = 0;
	while (splited[i] != NULL)
	{
		printf("%s\n", splited[i++]);
	}
	free_split(splited);
}

static char	*join_free(char *s1, char *s2)
{
	char	*out;

	out = ft_strjoin(s1, s2);
	if (!out)
		error_exit();
	free(s1);
	return (out);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
		free(split[i++]);
	free(split);
}
