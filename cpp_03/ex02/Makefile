
NAME = progName

SRC = main.cpp ClapTrap.cpp FragTrap.cpp
HED =  ClapTrap.hpp FragTrap.hpp
cc = c++ -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRC) $(HED)
	$(cc) $(SRC) -o $@

clean:
	rm -rf $(NAME).obj

fclean: clean
	rm -rf $(NAME)

re:	fclean all