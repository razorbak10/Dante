##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## generator
##

NAME	= generator

CC	= gcc

RM	= rm -f

SRCS	= \
		./src/errors.c \
		./src/gen_normal.c \
		./src/gen_perfect.c \
		./src/main.c \
		./src/tools.c \

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
