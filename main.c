/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:32:30 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/04 04:50:24 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	
	stack_a = NULL;
	if(check(ac, av))
		return(0);
	insert_number(&stack_a, av + 1, ac - 1);
	afficher(stack_a);
	if(stack_a <= 5)
		ft_sort_small_stack();
	else
		ft_sort_big_stack();
}
// 	stack_a = ft_radix_sort(stack_a);
// 	display(*stack_a);
// 	return(0);
// }