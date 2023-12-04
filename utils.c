/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 04:57:11 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/04 06:28:17 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_duplicate(t_stack **stack_a)
{
	
}

int		ft_is_sorted(t_stack **stack)
{
	t_stack *head;

	head = *stack;
	while(head)
	{
		if(head->data > head->next->data)
			return(0);
		head = head->next;
	}
	return(1);
}

void	ft_free_stack(t_stack **stack)
{
	t_stack *tmp;
	t_stack *head;
	
	head = *stack;
	while(stack)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}