NAME = bureaucrat

SRC =	main.cpp\
		Bureaucrat.cpp\
		Form.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\
		Intern.cpp\

OBJ = $(SRC:%.cpp=%.o)

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

CPP = c++

all: $(NAME)

$(NAME): $(OBJ)
		$(CPP) $(FLAGS) -o $@ $^
		@echo "\033[0;31mbureaucrat ready\033[0m"

%.o: %.cpp
		$(CPP) $(FLAGS) -o $@ -c $<

clean:
		@rm -f $(OBJ)
		@echo "clean done"

fclean:
		@rm -f $(OBJ)
		@rm -f $(NAME)
		@rm -f *_shrubbery*
		@echo "fclean done"

re: fclean all

.PHONY: all clean fclean re
