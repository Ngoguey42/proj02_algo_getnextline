#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 11:29:36 by ngoguey           #+#    #+#              #
#    Updated: 2014/11/13 10:04:57 by ngoguey          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NNAME = ft
NAME = lib$(NNAME).a

INCLUDE = ./includes
SRCPATH = srcs
OBJPATH = obj

CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIB = ar rc
RM = rm -rf

Y = \033[0;33m
R = \033[0;31m
E = \033[39m

COUNT = 0
OBJPERLINES = 4
TABLEN = 28
W = 0

SRCSFILES = ft_putchar.c ft_putstr.c ft_bzero.c ft_memcpy.c ft_memset.c\
	ft_memchr.c ft_strlen.c ft_memalloc.c

SRC = $(addprefix $(SRCPATH)/,$(SRCSFILES))
OBJECTS = $(SRC:$(SRCPATH)/%.c=$(OBJPATH)/%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@printf "\n$(Y)%-6s$(E) $(R)%s$(E) files\n" "total" $(shell wc -l $(SRC) | cut -d' ' -f5)
	@printf "$(Y)%-6s$(E) $(R)%s$(E) lines\n" "total" $(shell wc -l $(SRC) | tail -n 1 | cut -d' ' -f2)
	@printf "$(Y)%-6s$(E) $(NAME) $(R)$(OBJPATH)/%.o$(E)\n" "$(LIB)"
	@$(LIB) $(NAME) $(OBJECTS)
	@printf "$(Y)%-6s$(E) $(NAME)\n" "ranlib"
	@ranlib $(NAME)

text1:
	@printf "$(Y)%-6s$(E) -o $(R)$(OBJPATH)/%%.o$(E) $(CFLAGS) -I $(INCLUDE) -c $(SRCPATH)/%%.c\n" "$(CC)"

$(OBJECTS): $(OBJPATH)/%.o : $(SRCPATH)/%.c
	@if [ $(W) -eq 0 ] ; then printf "$(Y)%-6s$(E) -o $(R)$(OBJPATH)/%%.o$(E) $(CFLAGS) -I $(INCLUDE) -c $(SRCPATH)/%%.c\n" "$(CC)" ; fi
	$(eval W = 1)
	@mkdir -p $(dir $@)
	$(eval COUNT = $(shell echo "($(COUNT) + 1) % $(OBJPERLINES)" | bc))
	@printf "$(R)%-*s$(E)" $(TABLEN) "$@"
	@if [ $(COUNT) -eq 0 ] ; then echo "" ; fi
	@$(CC) -o $@ $(CFLAGS) -I $(INCLUDE) -c $<

clean:
	@printf "$(Y)%-6s$(E) $(OBJPATH)\n" "$(RM)"
	@$(RM) $(OBJPATH)

fclean: clean
	@printf "$(Y)%-6s$(E) $(NAME)\n" "$(RM)"
	@$(RM) $(NAME)

re: fclean all