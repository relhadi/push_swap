/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:15:20 by relhadi           #+#    #+#             */
/*   Updated: 2025/12/12 16:03:07 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					nb;
	int					index;
	struct s_stack_node	*next;
	struct s_stack_node	*previous;
	struct s_stack_node	*target;
}	t_stack_node;
long	ft_atol(char *str);
void	add_node_end(t_stack_node **stack, int nb);
long	ft_atol(char *str);
void	init_stack_a(t_stack_node **a, char **argv);
void	free_stack(t_stack_node **stack);
int		error_management(char *str_n);
int		duplicate_error(t_stack_node **a, int n);

#endif
