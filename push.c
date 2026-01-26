/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 01:51:35 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 03:08:57 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack_node **src, t_stack_node **dest)
{
	t_stack_node	*node_pushed;

	if (!src || !*src)
		return ;
	node_pushed = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	node_pushed->prev = NULL;
	if (!*dest)
	{
		*dest = node_pushed;
		node_pushed->next = NULL;
	}
	else
	{
		node_pushed->next = *dest;
		(*dest)->prev = node_pushed;
		*dest = node_pushed;
	}
}
