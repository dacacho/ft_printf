# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danierod <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 15:07:35 by danierod          #+#    #+#              #
#    Updated: 2022/03/17 15:09:13 by danierod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = ft_pfile1.c ft_pfile2.c

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):
	gcc $(FLAGS) -c -I. $(HEADER) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	$(RM) ft_printf.h.gch

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
