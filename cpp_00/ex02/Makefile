NAME = dreamJob

SRC = tests.cpp Account.cpp 
HED = Account.hpp
cc = g++ -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRC) $(HED)
	$(cc) $(SRC) -o $@

clean:
	rm -rf $(NAME).obj

fclean: clean
	rm -rf $(NAME)

re:	fclean all