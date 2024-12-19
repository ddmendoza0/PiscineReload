# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmendoza <dmendoza@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/18 16:35:21 by dmendoza          #+#    #+#              #
#    Updated: 2024/12/19 11:05:21 by dmendoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= ft_display_file

CUR_DIR = $(shell pwd)

SRCS 	= $(CUR_DIR)/main.c \
	  $(CUR_DIR)/ft_display_file.c

OBJS	= $(SRCS:.c=.o)

CC	= cc

RM	= rm -f

CFLAGS 	= -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:		
		$(RM) $(OBJS)

fclean: 	clean
		$(RM) $(NAME)

.PHONY:		all clean fclean

