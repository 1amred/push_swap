# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 20:34:13 by mamellal          #+#    #+#              #
#    Updated: 2022/03/30 11:14:09 by mamellal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  push_swap.c a_actions.c b_actions.c sorts.c utils.c buublesort.c saver_fri4nd.c c.c theboy_way.c try.c

SRCS_BONUS = gnl.c checker.c bon.c try.c saver_fri4nd.c norm.c

NAME = push_swap

NAME_S = checker

OBJS = $(SRCS:.c=.o)

OBJS_S = $(SRCS_BONUS:.c=.o)

CC = gcc
CFLAGS =  -Wall -Wextra -Werror

all : $(NAME)
	
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus : $(NAME_S)

$(NAME_S) : $(OBJS_S)
	$(CC) $(CFLAGS) $(OBJS_S) -o $(NAME_S)
clean :
	rm -f $(OBJS)
	rm -f $(OBJS_S)

fclean : clean
	rm -f $(NAME)
	rm -f $(NAME_S)

re : fclean all