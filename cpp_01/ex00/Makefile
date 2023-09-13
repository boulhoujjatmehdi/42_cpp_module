NAME = progName

SRC = main.cpp Zombie.cpp randomChump.cpp newZombie.cpp 
HED = Zombie.hpp Zombie.h
cc = c++ -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRC) $(HED)
	$(cc) $(SRC) -o $@

clean:
	rm -rf $(NAME).obj

fclean: clean
	rm -rf $(NAME)

re:	fclean all