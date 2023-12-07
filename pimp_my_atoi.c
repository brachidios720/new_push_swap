/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pimp_my_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:31:59 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/12/07 06:07:52 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f'
		|| c == '\r');
}

t_bool	ft_atoi(const char *str, int *count)
{
	int	sign;

	*count = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if ((*count > (INT_MAX / 10)) || (*count < (INT_MIN / 10)))
			return (1);
		*count = (*count * 10);
		if ((*count > (INT_MAX - (*str - '0')))
			|| (*count < (INT_MIN + (*str - '0'))))
			return (1);
		*count += (sign * (*str - '0'));
		str++;
	}
	return (*str != '\0');
}
