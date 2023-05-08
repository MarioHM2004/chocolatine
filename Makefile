##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## compiles your libmy
##

SRC  =          ./

OBJ  =          $(SRC.c=.o)

NAME =          equis

TEST_NAME =		tests_run

FLAGS = 		-Wall -Werror

CFILES =		star.c

all:    $(NAME)

$(NAME):	$(OBJ)
	gcc $(FLAGS) -o $(NAME) $(CFILES)


unit_test: $(TEST_NAME)

$(TEST_NAME): $(OBJ)

		gcc $(FLAGS) -o $(TEST_NAME) test.c -lcriterion

fclean:
	rm -f $(NAME)
	rm -f $(TEST_NAME)

re : fclean all
