/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 00:45:58 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/24 17:49:17 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "move.h"

t_stack		*ft_add_bottom(void *data)
{
	t_stack *new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if(!new)
		return(NULL);
	new->data = data;
	new->next = NULL;
	return(new);
}

t_stack		inser_number(t_stack *a, int nbr, int size)
{
	
}