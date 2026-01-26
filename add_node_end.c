/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_end.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:52:14 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 02:41:52 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_node_values(t_stack_node *node, int nb)
{
	node->nb = nb;
	node->cheapest = false;
	node->above_median = false;
	node->cost = 0;
	node->index = 0;
	node->target_node = NULL;
	node->next = NULL;
	node->prev = NULL;
}

void	add_node_end(t_stack_node **stack, int nb)
{
	t_stack_node	*last_node;
	t_stack_node	*new_node;

	if (!stack)
		return ;
	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		return ;
	init_node_values(new_node, nb);
	if (!*stack)
	{
		*stack = new_node;
		return ;
	}
	last_node = *stack;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	new_node->prev = last_node;
}
