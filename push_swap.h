/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelcarbonnel <raphaelcarbonnel@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:33:17 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/30 01:55:02 by raphaelcarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_h
# define push_swap_h

# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>

typedef struct stack
{
  int data;
  struct stack *next;
} t_stack;

int inser_number(t_stack **stack, char **nbr, int size);
t_stack		*get_last(t_stack *sstack);
void ft_lst_addback(t_stack **stack, t_stack *node);
int	ft_isdigit(char *c);
t_stack  *return_int_in_stack(t_stack *a);
void	afficher(t_stack *stack);
int	check(int ac, char **av);
t_stack		*create_new_node(int data);
int		*ft_atoi(char **av);


#endif
