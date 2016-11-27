##
## Makefile for  in /home/mathias/Bureau/picine/CPE_2016_Pushswap
## 
## Made by Mathias
## Login   <mathias.descoin@epitech.eu@epitech.net>
## 
## Started on  Sun Nov 27 16:03:59 2016 Mathias
## Last update Sun Nov 27 16:06:36 2016 Mathias
##

SRC	=	best.c		\
		my.c		\
		push_swap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
