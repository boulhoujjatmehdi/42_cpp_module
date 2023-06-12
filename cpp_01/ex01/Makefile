NAME = Zombie

SRC = main.cpp Zombie.cpp zombieHorde.cpp 
HED = Zombie.hpp Zombie.h
cc = g++ \
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