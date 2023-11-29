/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 00:45:58 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/28 19:36:32 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// cree un nouveau noeud en bas de la liste 

t_stack		*create_new_node(void *data)
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if(!new)
		return(NULL);
	new->data = data;
	new->next = NULL;
	return(new);
}

// ajoute une nouvelle node a la fin de la stack;

void ft_lst_addback(t_stack **stack, t_stack *node)
{
	t_stack *tmp;
	
	tmp = (*stack);
	if(tmp == NULL)
	{
		(tmp) = node;
		return;
	}
	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node;
}

// ajoute 1 a 1 les nombres dans un nouveau noeud qui sont crées 1 a 1;

main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	insert_number(&stack_a, argv + 1, argc - 1);
}

int inser_number(t_stack **stack, char **nbr, int size)
{
	int	i;
	t_stack *new_node;
	int	*nbr_ptr;
	
	i = 0;
	while(i < size)
	{
		new_node = create_new_node(ft_atoi(nbr[i]));
		if(new_node == NULL)
			return (-1);
		ft_lst_addback(stack, new_node);
		i++;  
	}
	return (0);
}

// int 	get_stack_size(t_stack *a)
// {
// 	t_stack *tmp;
// 	int count;
	
// 	count = 0;
// 	tmp = a;
// 	while(tmp)
// 	{
// 		count++;
// 		tmp = tmp->next;
// 	}
// 	return(count);
// }