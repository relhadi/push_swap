/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:15:20 by relhadi           #+#    #+#             */
/*   Updated: 2026/01/26 22:31:32 by relhadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack_node
{
	int					nb;
	int					index;
	int					cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;
void			rotate(t_stack_node **stack);
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			rev_rotate(t_stack_node	**stack);
void			free_stack(t_stack_node **stack);
int				error_management(char	*str);
int				duplicate_error(t_stack_node *a, int n);
void			init_stack_a(t_stack_node **a, char **argv);
void			add_node_end(t_stack_node **stack, int n);
long			ft_atol(const char *s);
char			**ft_split(char const *s, char c);
void			sa(t_stack_node **a);
void			sb(t_stack_node **b);
void			ss(t_stack_node **a, t_stack_node **b);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **b, t_stack_node **a);
void			ra(t_stack_node **a);
void			rb(t_stack_node **b);
void			rr(t_stack_node **a, t_stack_node **b);
void			rra(t_stack_node **a);
void			rrb(t_stack_node **b);
void			rrr(t_stack_node **a, t_stack_node **b);
void			set_current_pos(t_stack_node *stack);
void			set_target_a(t_stack_node *a, t_stack_node *b);
void			cost(t_stack_node *a, t_stack_node *b);
void			find_cheapest(t_stack_node *stack);
t_stack_node	*get_cheapest(t_stack_node *stack);
void			sort_three(t_stack_node **a);
void			push_a_to_b(t_stack_node **a, t_stack_node **b);
void			rotate_both(t_stack_node **a, t_stack_node **b,
					t_stack_node *cheap);
void			rota_to_top(t_stack_node **stack, t_stack_node *node, char c);
t_stack_node	*find_biggest(t_stack_node *stack);
t_stack_node	*find_smallest(t_stack_node *stack);
int				stack_sorted(t_stack_node *stack);
void			set_target_b(t_stack_node *a, t_stack_node *b);
void			push(t_stack_node **a, t_stack_node **b);
void			min_on_top(t_stack_node **a);
void			move_b_to_a(t_stack_node **a, t_stack_node **b);
void			init_node_b(t_stack_node *b, t_stack_node *a);
void			swap(t_stack_node **stack);
#endif
