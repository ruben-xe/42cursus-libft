# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/14 19:44:26 by richard           #+#    #+#              #
#    Updated: 2019/12/22 15:28:47 by rsoto-in         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

#Directories, Extensions
SRCEXT	= c
OBJEXT	= o
LIBEXT	= a

#Flags, Libraries
CFLAGS	= -Wall -Wextra -Werror
LFLAGS	= -rcs
LIBNAME = libft

#Sources, Objects
SRCS	= $(shell find . -type f -name "ft_*.$(SRCEXT)")
OBJS	= $(SRCS:.$(SRCEXT)=.$(OBJEXT))

all:	$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIBNAME).$(LIBEXT)

re:	fclean all

$(NAME): $(OBJS)
	ar $(LFLAGS) $(LIBNAME).$(LIBEXT) $(OBJS)

.PHONY: all clean fclean re