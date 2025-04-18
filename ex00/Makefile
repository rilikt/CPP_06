# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 15:31:31 by timschmi          #+#    #+#              #
#    Updated: 2025/04/18 12:16:40 by timschmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ScalarConverter.cpp PatternMatch.cpp
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

CC = c++

NAME = convert
CFLAGS = -std=c++17 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
