NAME = zombie

SRC = main.cpp Weapon.cpp Weapon.hpp HumanA.cpp HumanA.hpp HumanB.pp HumanB.hpp

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC)
	
clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
