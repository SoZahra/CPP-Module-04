# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/25 17:06:45 by fzayani           #+#    #+#              #
#    Updated: 2025/02/26 18:59:36 by fzayani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Poly

CC = c++

CFLAG = -Wall -Wextra -Wextra -std=c++98

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Wrong.cpp WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): 	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean all