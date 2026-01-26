/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 01:06:44 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 01:35:18 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_stack(t_stack_node *stack)
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

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int		len_a;

	len_a = len_stack(*a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a);
	while (len_stack(*a) > 3 && !stack_sorted(*a))
	{
		set_current_pos(*a);
		set_current_pos(*b);
		set_target_a(*a, *b);
		cost(*a, *b);
		find_cheapest(*a);
		push_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_node_b(*b);
		move_b_to_a(b, a);
	}
	min_on_top(a);
}
