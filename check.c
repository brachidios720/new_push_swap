/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:04:38 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/06 03:55:19 by rcarbonn         ###   ########.fr       */
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
			return(0);
		i++;
	}
	return(1);
}	

int	check(int ac, char **av)
{

	int	i;
	i = 1;
	if(ac < 2)
		return(1);
	while(i < ac)
	{
		if(ft_isdigit(av[i]) == 0)
			return(1);
		i++;
	}
	return(0);
}
