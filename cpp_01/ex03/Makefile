NAME = progName

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
HED = HumanA.hpp Weapon.hpp HumanB.hpp
cc = c++ \
-Wall -Werror -Wextra\
-std=c++98 \
# -g -fsanitize=address

all: $(NAME)

$(NAME): $(SRC) $(HED)
	$(cc) $(SRC) -o $@

clean:
	rm -rf $(NAME).obj

fclean: clean
	rm -rf $(NAME)

re:	fclean all