# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtsuji <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 16:21:07 by mtsuji            #+#    #+#              #
#    Updated: 2022/04/24 10:21:08 by mtsuji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	./srcs/push_swap.c	\
			./srcs/action.c	\
			./srcs/action_2.c	\
			./srcs/action_3.c	\
			./srcs/error_check.c	\
			./srcs/error_check_2.c	\
			./srcs/number_separate.c	\
			./srcs/quick_sort.c	\
			./srcs/short_sort.c	\
			./srcs/stack_init.c\
			./srcs/duplicate_check.c\
			./srcs/radix_sort.c\

OBJS	=	$(SRCS:.c=.o)

HEADER	=	./includes/

LIBFT	=	./libft/

LIBFT_A	=	./libft/libft.a

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -fsanitize=address -g3

.c.o:
	$(CC) $(CFLAGS) -I$(HEADER) -I$(LIBFT) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) $(LIBFT)
			@make -C $(LIBFT)
			ar rcs $(LIBFT_A) $(OBJS)
			ranlib $(LIBFT_A)
			$(CC) $(CFLAGS) $(OBJS) $(LIBFT_A) -o $(NAME)

all:	$(NAME)

clean:
		$(MAKE) clean -C $(LIBFT)
		$(RM) $(OBJS)

fclean:	clean
		$(MAKE) fclean -C $(LIBFT)
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
