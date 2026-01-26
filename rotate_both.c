/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_both.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:23:13 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 22:25:33 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheap)
{
	if (cheap->above_median && cheap->target_node->above_median)
	{
		while (*a != cheap && *b != cheap->target_node)
			rr(a, b);
	}
	if (!(cheap->above_median) && !(cheap->target_node->above_median))
	{
		while (*a != cheap && *b != cheap->target_node)
			rrr(a, b);
	}
	set_current_pos(*a);
	set_current_pos(*b);
}
