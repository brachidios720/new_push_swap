/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:08:31 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/27 23:01:13 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack		*get_last(t_stack *sstack)
{
	while(sstack && sstack->next != NULL)
		sstack = sstack->next;
	return(sstack);
}
