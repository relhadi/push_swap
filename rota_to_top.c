/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_for_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:55:37 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 04:00:13 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rota_to_top(t_stack_node **stack, t_stack_node *node, char c)
{
	if (!stack || !(*stack) || !node)
		return ;
	while (*stack != node)
	{
		if (c == 'a')
		{
			if (node->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else if (c == 'b')
		{
			if (node->above_median)
				rb(stack);
			else
				rrb(stack);
		}
	}
}
