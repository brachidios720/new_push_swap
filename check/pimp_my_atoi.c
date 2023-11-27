/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pimp_my_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelcarbonnel <raphaelcarbonnel@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:31:59 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/26 01:13:31 by raphaelcarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "check.h"

// transformer des char en int 
int		*ft_atoi(char **av)
{
	int i;
    int count;
    int nb; 
    
    count = 1;
    i = 0;
    nb = 0;
    while (av[i] == ' ' || av[i] == '\n' || av[i] == '\t' || av[i] == '\v'
		|| av[i] == '\f' || av[i] == '\r')
		i++;
    if (av[i] == '-' || av[i] == '+')
    {
            if(av[i] == '-')
                count++;
            i++;
    }
    while(av[i] >= 48 && av[i] <= 57)
    {
        nb = nb * 10 + (av[i] - 48);
        i++;
    }
    if(count % 2)
        return(nb);
    else
        return(-nb);
}

// renvoyer un stack remplie de int en remplissant noeud par noeud 

t_stack  return_int_in_stack(t_stack *a)
{
    t_stack  *tmp;
    int convert_value;

    tmp = a;
    while(tmp)
    {
        convert_value = ft_atoi(&(tmp->data));
        tmp->data = convert_value;
        tmp = tmp->next;
    }
    return(tmp);
}