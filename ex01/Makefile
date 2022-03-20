# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 00:49:46 by aconchit          #+#    #+#              #
#    Updated: 2022/03/16 20:33:22 by aconchit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = No_war
CC = c++ -std=c++98 -Wall -Wextra -Werror
C_F = main.cpp Fixed.cpp
H_F = Fixed.h
SRC = ./
C_FILES = $(addprefix $(SRC), $(C_F))
O_FILES = $(C_FILES:.cpp=.opp)
INCLIDES = ./
HEADERS = $(addprefix $(INCLIDES), $(H_F))

%.opp: %.cpp $(HEADERS)
	$(CC) -c $< -o $@ -I $(INCLIDES)

all: $(NAME)

$(NAME) : $(O_FILES)
	$(CC) $(O_FILES) -o $@ -I $(INCLIDES)

clean:
	rm -rf $(O_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re clean fclean all
