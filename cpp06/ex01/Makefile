NAME = reinterpret

SRC =	main.cpp\

OBJ = $(SRC:%.cpp=%.o)

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

CPP = c++

all: $(NAME)

$(NAME): $(OBJ)
		$(CPP) $(FLAGS) -o $@ $^
		@echo "\033[0;31mreinterpret ready\033[0m"

%.o: %.cpp
		$(CPP) $(FLAGS) -o $@ -c $<

clean:
		@rm -f $(OBJ)
		@echo "clean done"

fclean:
		@rm -f $(OBJ)
		@rm -f $(NAME)
		@echo "fclean done"

re: fclean all

.PHONY: all clean fclean re
