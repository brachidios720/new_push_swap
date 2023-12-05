/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:27:00 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/05 03:00:10 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int 		get_max_bit(t_stack **stack_a)
{
	int	max;
	t_stack *head;
	int max_bits;
	
	head = *stack_a;
	max = head->data;
	max_bits = 0;
	while(head)
	{
		if(head->data > max)
			max = head->data;
		head = head->next;
	}
	while((max >> max_bits) != 0)
		max_bits++;
	return(max_bits);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *head;
	int	i;
	int j;
	int size;
	int max_bits;

	i = 0;
	head = *stack_a;
	size = ft_lstsize(head);
	max_bits = get_max_bit(stack_a);
	while(i < max_bits)
	{
		j = 0;
		while(j++ < size)
		{
			head = *stack_a;
			if(((head->data >> i) & 1) == 1)
				do_ra(stack_a);
			else
				do_pb(stack_a, stack_b);
		}
		while(ft_lstsize(*stack_b))
			do_pa(stack_b, stack_a);
		i++;
	}
}