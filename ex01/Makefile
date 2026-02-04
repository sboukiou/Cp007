CXX=c++
CPPFLAGS=-Wall -Werror -Wextra -Wshadow
RM=rm -f

SRC=ex01.cpp
OBJ=$(SRC:%.cpp=%.o)
NAME=Iter

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
