/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 01:06:30 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 03:33:36 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_node_b(t_stack_node *b, t_stack_node *a)
{
	set_current_pos(b);
	set_current_pos(a);
	set_target_b(a, b);
}
