/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:28:21 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/06 03:29:38 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_min(t_stack **stack, int val)
{
	t_stack *head;
	int	min;
	
	head = *stack;
	min = head->index;
	while(head->next)
	{
		head = head->next;
		if((head->index < min) && head->index != val)
			min = head->index;
			
	}
	return(min);
}

void	do_all(t_stack **stack_a, int what)
{
		if (what == 1)
		{
			do_ra(stack_a);
			do_sa(stack_a);
			do_rra(stack_a);
		}
		else 
		{
			do_sa(stack_a);
			do_rra(stack_a);
		}
}

void	sort_3(t_stack **stack_a)
{
	t_stack *head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = get_min(stack_a, -1);
	next_min = get_min(stack_a, min);
	if(ft_is_sorted(stack_a))
		return;
	if(head->index == min && head->next->index != next_min)
		do_all(stack_a, 1);
	else if (head->index == next_min)
	{
		if(head->next->index == min)
			do_sa(stack_a);
		else
			do_rra(stack_a);
	}
	else
	{
		if(head->next->index == min)
			do_ra(stack_a);
		else
			do_all(stack_a, 2);
	}
}

void	sort_4(t_stack **stack_a, t_stack **stack_b)
{
	int distance;
	
	if(ft_is_sorted(stack_a))
		return;
	distance = get_distance(stack_a, get_min(stack_a, -1));
	if(distance == 1)
		do_ra(stack_a);
	else if (distance == 2)
	{
		do_ra(stack_a);
		do_ra(stack_a);
	}
	else if (distance == 3)
		do_rra(stack_a);
	if(ft_is_sorted(stack_a))
		return;
	do_pb(stack_a, stack_b);
	sort_3(stack_a);
	do_pa(stack_a, stack_b);
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int	distance;
	
	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		do_ra(stack_a);
	else if (distance == 2)
	{
		do_ra(stack_a);
		do_ra(stack_a);
	}
	else if (distance == 3)
	{
		do_rra(stack_a);
		do_rra(stack_a);
	}
	else if(distance == 4)
		do_rra(stack_a);
	if(ft_is_sorted(stack_a))
		return;
	do_pb(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	do_pa(stack_a, stack_b);
}


