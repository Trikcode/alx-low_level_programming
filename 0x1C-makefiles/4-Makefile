CC = gcc
SRC = main.c school.c
OBJ = $(SRC:.c=.o)
NAME = school
RM = -rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean:
	$(RM) *~ $(OBJ) $(NAME)

re: oclean all
