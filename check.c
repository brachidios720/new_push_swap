/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:04:38 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/29 22:33:35 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char *c)
{
	int	i;

	i = 0;
	while(c[i])
	{
		if(!(c[i] >= '0' && c[i] <= '9'))
			return(1);
		i++;
	}
	return(0);
}	

int	check(int ac, char **av)
{
	// iterate over av
	// chec if av[i] is a correct digit
	int	i;
	i = 0;
	while(av)
	{
		if(ac < 2)
			return(1);
		if(ft_isdigit(av) == 1)
			return(1);
		return(0);
	}
}
