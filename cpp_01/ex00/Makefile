# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 11:53:40 by ifluxa-c          #+#    #+#              #
#    Updated: 2025/02/17 11:56:16 by ifluxa-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieExec

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRCS = 	./main.cpp \
		./newZombie.cpp \
		./randomChump.cpp \
		./Zombie.cpp 
HEADERS = ./Zombie.hpp 

OBJS = $(SRCS:.cpp=.o)

CXX = clang++

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
