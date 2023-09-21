
NAME = progName

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
HED =  ClapTrap.hpp ScavTrap.hpp
cc = c++ -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRC) $(HED)
	$(cc) $(SRC) -o $@

clean:
	rm -rf $(NAME).obj

fclean: clean
	rm -rf $(NAME)

re:	fclean all