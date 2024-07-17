##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

LIBSHELL	=		shells/libshell.a

NAME 		=		organized

SRC			=		src/main.c	\
					src/my_strdup.c		\
					src/my_putstr.c		\
					src/my_putchar.c	\
					src/my_getnbr.c		\
					src/my_put_nbr.c	\
					src/my_putstr_error.c	\
					src/my_putchar_error.c	\
					src/organized_next.c


all: $(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) $(LIBSHELL)
		make clean

clean:
	rm -rf *~
	rm -rf *#

fclean: clean
	rm -rf $(NAME)

re: fclean all
