##
## EPITECH PROJECT, 2020
## Day10
## File description:
## day10
##

SRC 	=	my_put_bin.c	\
			my_put_hexa.c	\
			my_put_nbr.c	\
			my_put_octal.c	\
			my_putchar.c	\
			my_putstr.c		\
			my_strlen.c		\
			convert_function.c	\
			functions.c		\
			type_function.c

OBJ 	=	$(SRC:.c=.o)

NAME 	=	libmy.a

CFLAGS	=	-Wall -Wextra -I./

LDFLAGS = 	-lmy -L./lib/

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(NAME) ../../
	mkdir -p ../../include
	cp my.h ../../include

$(NAME):	$(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../../$(NAME)

re:	fclean all
