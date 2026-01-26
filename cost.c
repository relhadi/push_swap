/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:37:20 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 22:28:16 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	len_stack(t_stack_node *stack)
{
	int		i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

void	cost(t_stack_node *a, t_stack_node *b)
{
	int		len_a;
	int		len_b;

	len_a = len_stack(a);
	len_b = len_stack(b);
	while (a)
	{
		a->cost = a->index;
		if (!(a->above_median))
			a->cost = len_a - (a->index);
		if (a->target_node)
		{
			if (a->target_node->above_median)
				a->cost += a->target_node->index;
			else
				a->cost += len_b - (a->target_node->index);
		}
		a = a->next;
	}
}
