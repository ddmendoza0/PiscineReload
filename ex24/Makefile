# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmendoza <dmendoza@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/18 12:41:10 by dmendoza          #+#    #+#              #
#    Updated: 2024/12/18 15:55:58 by dmendoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a

CUR_DIR = $(shell pwd)

SRCS 	= $(CUR_DIR)/srcs/ft_putchar.c \
	$(CUR_DIR)/srcs/ft_putstr.c \
	$(CUR_DIR)/srcs/ft_strcmp.c \
	$(CUR_DIR)/srcs/ft_strlen.c \
	$(CUR_DIR)/srcs/ft_swap.c

OBJS 	= $(SRCS:.c=.o)

CC	= cc

CLIB	= ar rcs 

RM	= rm -f

CFLAGS 	= -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
		$(CLIB) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:		
		$(RM) $(OBJS)

fclean: 	clean
		$(RM) $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re
