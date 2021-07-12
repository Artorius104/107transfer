##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## my_sokoban
##

SRC		=	src/main.c	\
			src/check_arg.c	\
			src/transfer.c	\
			src/readme.c	\
			##addprefix

OBJ	=	$(SRC:.c=.o)

LIB	= -L./lib -lmy

CFLAGS 	+= -W -Wall -Wextra -g -lncurses

CRITERION_FLAGS	=	--coverage -lcriterion

CPPFLAGS = -I./include

CC = gcc

NAME	=	107transfer

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C ./lib/my
		$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME) $(LIB)
		rm -f $(OBJ)

.PHONY: clean fclean re all

clean:
		rm -f $(OBJ)

fclean: clean
		make fclean -C lib/my
		rm -f $(NAME)

re:		fclean all
