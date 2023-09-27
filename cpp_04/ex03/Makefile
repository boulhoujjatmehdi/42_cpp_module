
NAME = progName

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp  ICharacter.cpp  IMateriaSource.cpp MateriaSource.cpp
HED =  AMateria.hpp Ice.hpp Cure.hpp Character.hpp  ICharacter.hpp  IMateriaSource.hpp MateriaSource.hpp

cc = c++ -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRC) $(HED)
	$(cc) $(SRC) -o $@

clean:
	rm -rf $(NAME).obj

fclean: clean
	rm -rf $(NAME)

re:	fclean all