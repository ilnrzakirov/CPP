SRCS			= main.cpp Fixed.cpp

OBJS			= $(SRCS:.cpp=.o)

CPP				= c++
RM				= rm -f
FLAGS		= -Wall -Wextra -Werror

NAME			= fixed

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re