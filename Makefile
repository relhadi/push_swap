# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/26 01:43:05 by relhadi           #+#    #+#              #
#    Updated: 2026/01/26 04:01:46 by relhadi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -I.

SRCS		= main.c \
			  stack_sorted.c \
			  free_stack.c \
			  error_management.c \
			  duplicate_error.c \
			  init_stack_a.c \
			  add_node_end.c \
			  ft_atol.c \
			  ft_split.c \
			  ft_substr.c \
			  sa.c \
			  sb.c \
			  ss.c \
			  pa.c \
			  pb.c \
			  ra.c \
			  rb.c \
			  rr.c \
			  rra.c \
			  rrb.c \
			  rrr.c \
			  swap.c \
			  rotate.c \
			  rev_rotate.c \
			  set_current_pos.c \
			  set_target_a.c \
			  set_target_b.c \
			  cost.c \
			  find_cheapest.c \
			  get_cheapest.c \
			  sort_three.c \
			  push_a_to_b.c \
			  rotate_both.c \
			  rota_to_top.c \
			  find_biggest.c \
			  find_smallest.c \
			  push.c \
			  min_on_top.c \
			  move_b_to_a.c \
			  init_node_b.c

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
