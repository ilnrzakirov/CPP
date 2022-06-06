NAME		=	MutantStack

OBJS_DIR	=	./objs/

SRC			=	main.cpp	\


HEADERS		= 	MutantStack.hpp

CC			=	c++

FLAGS		=	-Wall -Werror -Wextra -g -std=c++98 -pedantic

OBJS_NAME	=	$(SRC:.cpp=.o)

OBJS		=	$(addprefix $(OBJS_DIR), $(OBJS_NAME))

all:	$(NAME)

$(NAME):	$(OBJS)
			@($(CC) $(FLAGS) -o $(NAME) $(OBJS))
			@(echo "______________Программа $(NAME) готова___________")

$(OBJS):	$(SRC) $(HEADERS)
			@(mkdir -p $(OBJS_DIR))
			@($(CC) -c $(SRC))
			@(mv $(OBJS_NAME) $(OBJS_DIR))

clean:
	@(rm -rf $(OBJS))
	@(echo "______________Почистили файлы \".o\"_______________")

fclean: clean
	@(rm -rf  $(NAME))
	@(rm -rf $(OBJS_DIR))
	@(echo "_____________Удалили программу $(NAME)___________")

re: fclean all
.PHONY: all clean fclean re