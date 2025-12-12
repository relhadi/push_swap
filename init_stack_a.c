/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:22:02 by relhadi           #+#    #+#             */
/*   Updated: 2025/12/12 15:57:50 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (1);
	while (str[i])
		i++;
	return (i);
}

static void	display_free_error(t_stack_node **a)
{
	const char	*str;

	str = "Error\n";
	free_stack(a);
	write(2, str, ft_strlen(str));
	exit(1);
}

void	init_stack_a(t_stack_node **a, char	**argv)
{
	int		i;
	long	n;

	i = 0;
	while (argv[i])
	{
		if (error_management(argv[i]) == 1)
			display_free_error(a);
		n = ft_atol(argv[i]);
		if (n > INT_MAX || n < INT_MIN)
			display_free_error(a);
		if (duplicate_error(a, n) == 1)
			display_free_error(a);
		else
			add_node_end(a, n);
		i++;
	}
}
