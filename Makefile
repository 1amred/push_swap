# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 20:34:13 by mamellal          #+#    #+#              #
#    Updated: 2022/03/01 23:01:35 by mamellal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  push_swap.c a_actions.c b_actions.c sorts.c utils.c
		
NAME = push_swap


OBJS = $(SRCS:.c=.o)

OBJS_S = $(SRCS_S:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME) $(NAME_S)
	
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all