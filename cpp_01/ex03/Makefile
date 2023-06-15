# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 15:00:38 by eboulhou          #+#    #+#              #
#    Updated: 2023/06/12 15:28:43 by eboulhou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = progName

SRC = Weapon.cpp main.cpp HumanA.cpp HumanB.cpp
HED =  Weapon.hpp HumanA.hpp HumanB.hpp
cc = g++ -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRC) $(HED)
	$(cc) $(SRC) -o $@

clean:
	rm -rf $(NAME).obj

fclean: clean
	rm -rf $(NAME)

re:	fclean all