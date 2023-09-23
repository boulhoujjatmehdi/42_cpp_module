
NAME = progName

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp wrongAnimal.cpp wrongCat.cpp Brain.cpp
HED =  Animal.hpp  Dog.hpp Cat.hpp wrongAnimal.hpp WrongCat.hpp Brain.hpp
cc = c++ -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRC) $(HED)
	$(cc) $(SRC) -o $@

clean:
	rm -rf $(NAME).obj

fclean: clean
	rm -rf $(NAME)

re:	fclean all