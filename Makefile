# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 23:01:17 by rcarbonn          #+#    #+#              #
#    Updated: 2023/12/06 04:26:22 by rcarbonn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
CFLAGS = -Wall -Werror -Wextra
RM				= rm -f
NAME	=	push_swap

SRC_PATH = src/

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
					
SRCS	= $(addprefix $(SRC_PATH), $(SRC))
OBJ	= $(SRC:.c=.o)
OBJS	= $(addprefix $(OBJ_PATH), $(OBJ))
INCS	= -I ./includes/

all: $(OBJ_PATH) $(NAME) 

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_PATH):
		mkdir $(OBJ_PATH)

clean:
				$(RM) $(OBJ_PATH)
fclean:			clean
				$(RM) $(NAME)	

re: fclean all 

.PHONY: all, clean, fclean, re