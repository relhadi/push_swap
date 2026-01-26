/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheapest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:30:30 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 02:11:04 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_cheapest(t_stack_node *stack)
{
	t_stack_node	*cheapest_node;
	long			cheapest_cost;

	cheapest_node = NULL;
	if (!stack)
		return ;
	cheapest_cost = LONG_MAX;
	while (stack)
	{
		stack->cheapest = false;
		if (stack->cost < cheapest_cost)
		{
			cheapest_cost = stack->cost;
			cheapest_node = stack;
		}
		stack = stack->next;
	}
	cheapest_node->cheapest = true;
}
