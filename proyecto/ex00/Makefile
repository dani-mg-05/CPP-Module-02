# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: damedina <damedina@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 22:27:59 by damedina          #+#    #+#              #
#    Updated: 2025/04/27 22:28:08 by damedina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

OBJ_DIR = obj

SRC =	main.cpp \
		Fixed.cpp
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean	all

.PHONY: all clean fclean re
