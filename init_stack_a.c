/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:22:02 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 03:50:26 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

static void	free_split(char **argv)
{
	int	i;

	i = -1;
	if (NULL == argv)
		return ;
	while (argv[++i])
		free(argv[i]);
	free(argv);
}

static void	display_free_error(t_stack_node **a, char **args_split)
{
	const char	*str;

	str = "Error\n";
	if (args_split)
		free_split(args_split);
	free_stack(a);
	write(2, str, ft_strlen(str));
	exit(1);
}

static void	process_split_args(t_stack_node **a, char **args_split)
{
	long	n;
	int		j;

	j = 0;
	while (args_split[j])
	{
		if (error_management(args_split[j]))
			display_free_error(a, args_split);
		n = ft_atol(args_split[j]);
		if (n > INT_MAX || n < INT_MIN)
			display_free_error(a, args_split);
		if (duplicate_error(*a, (int)n))
			display_free_error(a, args_split);
		add_node_end(a, (int)n);
		j++;
	}
}

void	init_stack_a(t_stack_node **a, char **argv)
{
	char	**args_split;
	int		i;

	i = 0;
	while (argv[i])
	{
		args_split = ft_split(argv[i], ' ');
		if (!args_split)
			display_free_error(a, NULL);
		if (!args_split[0])
			display_free_error(a, args_split);
		process_split_args(a, args_split);
		free_split(args_split);
		i++;
	}
}
