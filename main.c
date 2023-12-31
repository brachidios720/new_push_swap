/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:32:30 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/07 06:22:36 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (check(ac, av))
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	if (insert_number(&stack_a, av + 1, ac - 1))
	{
		ft_free_stack(&stack_a);
		return (0);
	}
	if (ft_is_sorted(&stack_a) == 1)
	{
		ft_free_stack(&stack_a);
		ft_free_stack(&stack_b);
		return (0);
	}
	sort_stack(&stack_a, &stack_b);
	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (0);
}
