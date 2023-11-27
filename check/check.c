/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelcarbonnel <raphaelcarbonnel@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:04:38 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/25 17:50:21 by raphaelcarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

int	ft_isdigit(char *c)
{
	int	i;

	i = 0;
	while(c[i])
	{
		if(!(c[i] >= '0' && c[i] =< '9'))
			return(1);
		i++;
	}
	return(0);
}	

int	ft_check(int ac, char **av, t_stack *stack_a)
{
	if(ac < 2)
		return(1);
	if(ft_isdigit(av) == 1)
		return(1);
	*stack_a = ft_atoi(av);
	return(0);
}
