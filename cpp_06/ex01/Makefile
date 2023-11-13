
NAME = progName

SRC = Main.cpp Serializer.cpp
HED =  Serializer.hpp Data.hpp
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
