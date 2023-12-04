/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pimp_my_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:31:59 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/04 04:02:42 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

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
