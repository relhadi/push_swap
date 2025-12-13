/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 18:03:50 by relhadi           #+#    #+#             */
/*   Updated: 2025/12/14 00:02:25 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack_node **head)
{
	t_stack_node	*first;
	t_stack_node	*second;

	first = *head;
	first->next = second;
	if (!head || !*head || !(*head)->next)
		return ;
	first->next = second->next;
	if (first->next != NULL)
		first->next->previous = first;
	second->next = first;
	first->previous = second;
	second->previous = NULL;
	*head = second;
}
