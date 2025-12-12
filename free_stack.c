/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:24:14 by relhadi           #+#    #+#             */
/*   Updated: 2025/12/12 15:57:12 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		(*stack) = tmp;
	}
	*stack = NULL;
}
