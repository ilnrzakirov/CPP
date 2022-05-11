NAME = ClapTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC)
	
clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
