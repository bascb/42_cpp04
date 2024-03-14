NAME = animals
CXX = c++
CXXFLAGS = -std=c++98 -Wshadow -Wall -Werror -Wextra -g
SRC = Animal.cpp main.cpp
	
all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)
	
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus