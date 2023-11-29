/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:33:17 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/28 19:41:40 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_h
# define push_swap_h

# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>

typedef struct stack
{
  int *data;
  struct stack *next;
} t_stack;

int inser_number(t_stack **stack, char **nbr, int size);
t_stack		*get_last(t_stack *sstack);
void ft_lst_addback(t_stack **stack, t_stack *node);
int	ft_isdigit(char *c);
t_stack  *return_int_in_stack(t_stack *a);
char	afficher(t_stack *stack);
int	check(int ac, char **av, t_stack *stack_a);
t_stack		*create_new_node(void *data);


#endif
