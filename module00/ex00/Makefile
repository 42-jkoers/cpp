NAME = megaphone

SRC = $(shell find . -name *.cpp)

OBJ = $(SRC:%.cpp=%.o)

CPP = clang++
FLAG = -Wall -Wextra -Werror -pedantic -std=c++98 -Wshadow -Wno-shadow

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAG) -o $@ $^

%.o: %.cpp %.hpp
	$(CPP) $(FLAG) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
