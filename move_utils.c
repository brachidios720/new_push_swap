/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 00:45:58 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/07 06:21:29 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// cree un nouveau noeud en bas de la liste

t_stack	*create_new_node(int data)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->index = -1;
	new->data = data;
	new->next = NULL;
	return (new);
}

// ajoute une nouvelle node a la fin de la stack;

void	ft_lst_addback(t_stack **stack, t_stack *node)
{
	t_stack	*tmp;

	tmp = (*stack);
	if (tmp == NULL)
	{
		(*stack) = node;
		return ;
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node;
	node->next = NULL;
}

int	is_in_stack(int nbr, t_stack *node)
{
	while (node)
	{
		if (node->data == nbr)
			return (1);
		node = node->next;
	}
	return (0);
}

int	insert_number(t_stack **stack, char **nbr, int size)
{
	int		i;
	int		tmp;
	t_stack	*new_node;

	i = 0;
	while (i < size)
	{
		if (ft_atoi(nbr[i], &tmp) || is_in_stack(tmp, *stack))
		{
			ft_error();
			return (-1);
		}
		new_node = create_new_node(tmp);
		if (new_node == NULL)
		{
			ft_error();
			return (-1);
		}
		ft_lst_addback(stack, new_node);
		i++;
	}
	index_stack(stack);
	return (0);
}
