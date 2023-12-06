/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:27:00 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/06 02:03:31 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int 		get_max_bit(t_stack **stack_a)
{
	int	max;
	t_stack *head;
	int max_bits;
	
	head = *stack_a;
	max = head->index;
	max_bits = 0;
	while(head)
	{
		if(head->index > max)
			max = head->index;
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
			if(((head->index >> i) & 1) == 1)
				do_ra(stack_a);
			else
				do_pb(stack_a, stack_b);
		}
		while(ft_lstsize(*stack_b) != 0)
			do_pa(stack_b, stack_a);
		i++;
	}
}