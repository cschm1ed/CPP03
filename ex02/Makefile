# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cschmied <cschmied@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/18 13:51:14 by cschmied          #+#    #+#              #
#    Updated: 2023/06/18 13:51:14 by cschmied         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= FragTrap

SRCS		:= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS		:= $(SRCS:.cpp=.o)

CFLAGS		:= -Wall -Werror -Wextra -std=c++98 -fsanitize=address

CC			:= c++

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean all re fclean

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

all: $(NAME)
