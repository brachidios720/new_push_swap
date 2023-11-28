/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:33:17 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/27 23:15:34 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP.H
#define PUSH_SWAP.H

# include <stdlib.h>
# include <stddef.h>

typedef struct stack
{
  void *data;
  struct stack *next;
} t_stack;

#endif
