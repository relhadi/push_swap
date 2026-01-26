/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:09:06 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 04:16:21 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	duplicate_error(t_stack_node *a, int n)
{
	t_stack_node	*node_i;

	node_i = a;
	if (!(a))
		return (0);
	while (node_i)
	{
		if (node_i->nb == n)
			return (1);
		node_i = node_i->next;
	}
	return (0);
}
