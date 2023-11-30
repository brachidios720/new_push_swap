/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pimp_my_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelcarbonnel <raphaelcarbonnel@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:31:59 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/30 01:49:02 by raphaelcarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

// transformer des char en int 
// int		*ft_atoi_single(char *av)
// {
// 	int i;
//     int count;
//     int nb; 
    
//     count = 1;
//     i = 0;
//     nb = 0;
//     while (av[i] == ' ' || av[i] == '\n' || av[i] == '\t' || av[i] == '\v'
// 		|| av[i] == '\f' || av[i] == '\r')
// 		i++;
//     if (av[i] == '-' || av[i] == '+')
//     {
//             if(av[i] == '-')
//                 count++;
//             i++;
//     }
//     while(av[i] >= 48 && av[i] <= 57)
//     {
//         nb = nb * 10 + (av[i] - 48);
//         i++;
//     }
//     if(count % 2)
//         return(nb);
//     else
//         return(-nb);
// }

int ft_is_whitespace(char c)
{
    return (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r');
}

int ft_atoi_single(char *str)
{
    int i = 0;
    int count = 1;
    int nb = 0;

    while (ft_is_whitespace(str[i]))
    {
        i++;
    }

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            count++;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }

    return (count % 2 == 1) ? nb : -nb;
}

int *ft_atoi(char **av)
{
    int i = 0;
    int *result = (int *)malloc(sizeof(int) * 10); 

    if (result == NULL)
    {

        return NULL;
    }

    while (av[i] != NULL)
    {
        result[i] = ft_atoi_single(av[i]);
        i++;
    }

    result[i] = 0; 

    return result;
}

// renvoyer un stack remplie de int en remplissant noeud par noeud 

// t_stack  *return_int_in_stack(t_stack *a)
// {
//     t_stack  *tmp;
//     int convert_value;

//     tmp = a;
//     while(tmp) // j'aurai pas fais com ca..
//     {
//         convert_value = ft_atoi(&(tmp->data));
//         tmp->data = convert_value;
//         tmp = tmp->next;
//     }
//     return(tmp); // c nul ca?
// }

// petit con de merde