/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:33:17 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/04 04:32:49 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_h
# define push_swap_h

# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>

typedef struct stack
{
  int data;
  struct stack *next;
} t_stack;

// move

void	do_sa(t_stack **stack_a);
void	do_sb(t_stack **stack_b);
void	do_ss(t_stack **stack_a, t_stack **stack_b);
void	do_pa(t_stack **stack_b, t_stack **stack_a);
void	do_pb(t_stack **stack_a, t_stack **stack_b);
void	do_rra(t_stack **stack_a);
void	do_rrb(t_stack **stack_b);
void	do_rrr(t_stack **stack_a, t_stack **stack_b);
void	do_ra(t_stack **stack_a);
void	do_rb(t_stack **stack_b);
void	do_rr(t_stack **stack_a, t_stack **stack_b);

//parsing

int insert_number(t_stack **stack, char **nbr, int size);
t_stack		*get_last(t_stack *sstack);
void ft_lst_addback(t_stack **stack, t_stack *node);
int	ft_isdigit(char *c);
t_stack  *return_int_in_stack(t_stack *a);
int	check(int ac, char **av);
t_stack		*create_new_node(int data);
int		*ft_atoi(char **av);

//algo


//display
void	afficher(t_stack *stack);
void	ft_putstr(char *str);

#endif
