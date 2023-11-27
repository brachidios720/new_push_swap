/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelcarbonnel <raphaelcarbonnel@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 00:45:58 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/26 02:59:07 by raphaelcarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "move.h"

// cree un nouveau noeud en bas de la liste 

t_stack		*ft_add_bottom(void *data)
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if(!new)
		return(NULL);
	new->data = data;
	new->next = NULL;
	return(new);
}

// ajoute 1 a 1 les nombres dans un nouveau noeud qui sont crées 1 a 1;

t_stack		inser_number(t_stack **a, int nbr[], int size)
{
	int	i;
	t_stack *new_node;
	int	*nbr_ptr;
	
	i = 0;
	while(i < size)
	{
		nbr_ptr = (int *)malloc(sizeof(int));
		if(!nbr_ptr)
			break;
		*nbr_ptr = nbr[i];
		new_node = ft_add_bottom(nbr_ptr);
		if(!new_node)
			break;
		new_node->next = *a;
		*a = new_node;
		i++;  
	}
	return_int_in_stack(*a);
}

int 	get_stack_size(t_stack *a)
{
	t_stack *tmp;
	int count;
	
	count = 0;
	tmp = a;
	while(tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return(count);
}