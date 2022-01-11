# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 11:37:06 by mtsuji            #+#    #+#              #
#    Updated: 2022/01/11 13:09:37 by mtsuji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	./srcs/	それぞれのファイル名\
			./srcs/	それぞれのファイル名\

OBJS	=	${SRCS:.c=.o}

HEADER	=	./includes/push_swap.h

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
