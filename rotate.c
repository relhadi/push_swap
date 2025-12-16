/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 23:15:31 by relhadi           #+#    #+#             */
/*   Updated: 2025/12/15 01:20:02 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack_node **a)
{
	t_stack_node	*first;
	t_stack_node	*last;

	first = *a;
	last = *a;
	if (!a || !*a || !(*a)->next)
		return ;
	while (last->next != NULL)
		last = last->next;
	*a = first->next;
	(*a)->previous = NULL;
	last->next = first;
	first->previous = last;
	first->next = NULL;
}
