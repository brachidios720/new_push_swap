/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   afficher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:29:23 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/28 19:36:42 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	afficher(t_stack *stack)
{
	while (stack)
	{
		printf("%d", stack->data);
		stack = stack->next;
	}
}
