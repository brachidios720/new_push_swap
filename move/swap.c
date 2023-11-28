/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:55:38 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/27 23:12:01 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "move.h"

void		do_sa(t_stack *a)
{
	t_stack	*tmp;

	if(a == NULL)
		return;
	tmp = a->data;
	tmp = a->next->data;
	tmp->data = tmp->next->data;
	tmp->next->data = tmp->data;
}

void		do_sb(t_stack *b)
{
	t_stack	*tmp;

	if(b == NULL)
		return;
	tmp = b->data;
	tmp = b->next->data;
	tmp->data = tmp->next->data;
	tmp->next->data = tmp->data;
}

void		do_ss(t_stack *a, t_stack *b)
{
	do_sa(a);
	do_sb(b);
} 