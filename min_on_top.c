/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_on_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 01:31:32 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 22:25:52 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_on_top(t_stack_node **a)
{
	t_stack_node	*min;

	min = find_smallest(*a);
	rota_to_top(a, min, 'a');
}
