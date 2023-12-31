/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:33:17 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/07 06:29:40 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef unsigned char	t_bool;

typedef struct stack
{
	int					data;
	int					index;
	struct stack		*next;
}						t_stack;

// move

void					do_sa(t_stack **stack_a);
void					do_sb(t_stack **stack_b);
void					do_ss(t_stack **stack_a, t_stack **stack_b);
void					do_pa(t_stack **stack_b, t_stack **stack_a);
void					do_pb(t_stack **stack_a, t_stack **stack_b);
void					do_rra(t_stack **stack_a);
void					do_rrb(t_stack **stack_b);
void					do_rrr(t_stack **stack_a, t_stack **stack_b);
void					do_ra(t_stack **stack_a);
void					do_rb(t_stack **stack_b);
void					do_rr(t_stack **stack_a, t_stack **stack_b);

// parsing

int						insert_number(t_stack **stack, char **nbr, int size);
t_stack					*get_last(t_stack *sstack);
void					ft_lst_addback(t_stack **stack, t_stack *node);
int						ft_isdigit(int c);
t_stack					*return_int_in_stack(t_stack *a);
int						check(int ac, char **av);
t_stack					*create_new_node(int data);
t_bool					ft_atoi(const char *str, int *count);
void					index_stack(t_stack **stack);
int						is_duplicate(t_stack **stack_a);

// algo
void					radix_sort(t_stack **stack_a, t_stack **stack_b);
void					sort_5(t_stack **stack_a, t_stack **stack_b);
void					sort_4(t_stack **stack_a, t_stack **stack_b);
void					sort_3(t_stack **stack_a);
void					do_all(t_stack **stack_a, int what);
void					simple_sort(t_stack **stack_a, t_stack **stack_b);
int						get_max_bit(t_stack **stack_a);

// display

void					ft_putstr(char *str);

// utils

void					ft_free_stack(t_stack **stack);
int						ft_is_sorted(t_stack **stack);
int						ft_lstsize(t_stack *stack);
int						get_distance(t_stack **stack, int index);
int						ft_isnum(char *num);
int						ft_isdigit(int c);
void					ft_error(void);

#endif