NAME = zombie

SRC = main.cpp Replace.cpp Replace.hpp

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
