# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 23:01:17 by rcarbonn          #+#    #+#              #
#    Updated: 2023/12/07 03:51:42 by rcarbonn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang
CFLAGS 	= -Wall -Werror -Wextra
RM		= rm -f
NAME	=	push_swap

SRC		=			afficher.c \
					big_sort.c \
					check.c \
					index.c \
					little_sort.c \
					little_sort2.c \
					main.c \
					move_utils.c \
					pimp_my_atoi.c \
					push.c \
					reverse.c \
					rotate.c \
					stack.c \
					swap.c \
					utils.c \
					utils2.c 
					
all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


clean: 

fclean: 
	$(RM) $(NAME)


re: fclean all 

.PHONY: all, clean, fclean, re




