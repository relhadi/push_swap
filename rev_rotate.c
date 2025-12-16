/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 01:24:18 by relhadi           #+#    #+#             */
/*   Updated: 2025/12/15 01:38:47 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack_node **head)
{
	t_stack_node	*last;

	if (!head || !*head || !(*head)->next)
		return ;
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->previous->next = NULL;
	last->next = *head;
	(*head)->previous = last;
	last->previous = NULL;
	(*head) = last;
}
