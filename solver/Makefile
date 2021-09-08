##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## solver
##

NAME	= solver

CC	= gcc

RM	= rm -f

SRCS	= \
		./src/main.c \
		./src/solver.c \
		./src/errors.c \

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I./include
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re