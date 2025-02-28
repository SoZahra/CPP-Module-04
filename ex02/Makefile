# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/25 17:06:45 by fzayani           #+#    #+#              #
#    Updated: 2025/02/28 15:31:28 by fzayani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CC = c++

CFLAG = -Wall -Wextra -Wextra -std=c++98

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Wrong.cpp WrongCat.cpp Brain.cpp

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