
NAME = PmergeMe

SRC = $(wildcard *.cpp)
HED =  $(wildcard *.hpp) $(wildcard *.tpp)
CXX = c++ 
CXXFLAGS= -std=c++98 -Wall -Werror -Wextra
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp $(HED)
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
$(NAME):$(HED) $(OBJ) 
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

run:all
	./$(NAME)
