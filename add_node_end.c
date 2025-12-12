/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_end.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:52:14 by relhadi           #+#    #+#             */
/*   Updated: 2025/12/10 19:27:28 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_node_end(t_stack_node **stack, int nb)
{
	t_stack_node	*last_node;
	t_stack_node	*new_node;

	if (!stack)
		return ;
	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		return ;
	new_node->nb = nb;
	new_node->next = NULL;
	if (!*stack)
	{
		*stack = new_node;
		new_node->previous = NULL;
		return ;
	}
	else
	{
		last_node = *stack;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->previous = last_node;
	}
}
