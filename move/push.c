/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:47:35 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/27 23:11:54 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "move.h"

void		do_pa(t_stack *b, t_stack *a)
{
	t_stack	*tmp;
	t_stack *tmp2;
	
	tmp = b->data;
	tmp2 = a->data;
	a->data = tmp;
	b->data = tmp2;
}

void		do_pb(t_stack *a, t_stack *b)
{
	t_stack	*tmp;
	t_stack *tmp2;

	tmp = a->data;
	tmp2 = b->data;
	b->data = tmp;
	a->data = tmp2;
}
