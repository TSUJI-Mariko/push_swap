# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtsuji <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 16:21:07 by mtsuji            #+#    #+#              #
#    Updated: 2022/01/13 14:51:44 by mtsuji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	./srcs/	push_swap.c\
			./srcs/	action.c\

OBJS	=	${SRCS:.c=.o}

HEADER	=	./includes/push_swap.h

LIBFT	=	libft

LIBFT_A	=	./libft/libft.a

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			make all -C ${LIBFT}
			cp ${LIBFT} ${LIBFT_A}
			mv ${LIBFT_A} ${NAME}
			${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
		${MAKE}  clean -C ${LIBFT}
		${RM} ${OBJS}

fclean:	clean
		${MAKE} clean -C ${LIBFT}
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
