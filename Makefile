# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsoto-in <rsoto-in@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/14 19:44:26 by richard           #+#    #+#              #
#    Updated: 2019/11/14 19:54:36 by rsoto-in         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

#Directories, Extensions
SRCEXT	= c
OBJEXT	= o
LIBEXT	= a

#Flags, Libraries
CFLAGS	= -Wall -Wextra -Werror
LFLAGSM	= -rcs
LFLAGSB = -q
LIBNAME = libft

#Sources, Objects
SRCSM	= $(shell find ft_*.$(SRCEXT) ! -name '*lst*')
SRCSB	= $(shell find ft_lst*.$(SRCEXT))
OBJSM	= $(SRCSM:.$(SRCEXT)=.$(OBJEXT))
OBJSB	= $(SRCSB:.$(SRCEXT)=.$(OBJEXT))

all:	$(NAME)

clean:
	rm -f $(OBJSM)
	rm -f $(OBJSB)

fclean: clean
	rm -f $(LIBNAME).$(LIBEXT)

re:	fclean all

$(NAME): $(OBJSM)
	ar $(LFLAGSM) $(LIBNAME).$(LIBEXT) $(OBJSM)

bonus: $(OBJSM) $(OBJSB)
	ar $(LFLAGSB) $(LIBNAME).$(LIBEXT) $(OBJSB)

.PHONY: all clean fclean re