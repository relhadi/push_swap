/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_biggest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 00:39:52 by relhadi           #+#    #+#             */
/*   Updated: 2025/12/16 01:34:59 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_biggest(t_stack_node **a)
{
	long			biggest;
	t_stack_node	*node_biggest;
	t_stack_node	*node_i;

	if (!a || !*a)
		return NULL;
	node_i = *a;
	node_biggest = *a;
	biggest = (*a)->nb;
	while (node_i != NULL)
	{
		if (node_i->nb > biggest)
		{
			biggest = node_i->nb;
			node_biggest = node_i;
		}
		node_i = node_i->next;
	}
	return (node_biggest);
}
