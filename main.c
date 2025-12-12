/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:06:55 by relhadi           #+#    #+#             */
/*   Updated: 2025/12/12 16:26:43 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack_node *a;
	t_stack_node *tmp;
	a = NULL;
	if (argc < 2)
		return (0);
	init_stack_a(&a, (argv + 1));
	tmp = a;
	while (tmp)
	{
		printf("%d\n", tmp->nb);
		tmp = tmp->next;
	}
	free_stack(&a);
	return (0);
}
