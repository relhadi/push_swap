/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 00:33:44 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 02:47:23 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack_node **a)
{
	t_stack_node	*biggest;

	if (!a ||!*a || !(*a)->next || !(*a)->next->next)
		return ;
	biggest = find_biggest(*a);
	if (biggest == *a)
		ra(a);
	else if (biggest == (*a)->next)
		rra(a);
	if ((*a)->nb > (*a)->next->nb)
		sa(a);
}
