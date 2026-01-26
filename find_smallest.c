/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 04:34:11 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 02:24:17 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_smallest(t_stack_node *a)
{
	long			smallest;
	t_stack_node	*node_smallest;
	t_stack_node	*node_i;

	if (!a)
		return (NULL);
	node_i = a;
	node_smallest = a;
	smallest = a->nb;
	while (node_i != NULL)
	{
		if (node_i->nb < smallest)
		{
			smallest = node_i->nb;
			node_smallest = node_i;
		}
		node_i = node_i->next;
	}
	return (node_smallest);
}
