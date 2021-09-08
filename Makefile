##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## global
##
all: re

clean:
	cd generator && make clean
	cd solver && make clean

fclean: clean
	cd generator && make fclean
	cd solver && make fclean

re: fclean
	cd generator && make re
	cd solver && make re
	cd generator && make clean
	cd solver && make clean

.PHONY: all clean fclean re