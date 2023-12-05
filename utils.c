/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 04:57:11 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/05 01:09:57 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_duplicate(t_stack **stack_a)
{
	t_stack *head;
	t_stack *runner;
	
	runner = NULL;
	head = *stack_a;
	while(head != NULL && head->next != NULL)
	{
		runner = head;
		while(runner->next != NULL)
		{
			if(head->data == head->next->data)
			{
				return(1);
			}
			runner = runner->next;
		}
		head = head->next;
	}
	return(0);
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

int		ft_lstsize(t_stack *stack)
{
	size_t i;
	t_stack *tmp;

	i = 0;
	tmp = stack;
	while(tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return(i);
}