# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 11:53:40 by ifluxa-c          #+#    #+#              #
#    Updated: 2025/02/17 12:41:47 by ifluxa-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieExec

CXXFLAGS = -Wall -Werror -Wextra -fsanitize=address#-std=c++98 

SRCS = 	./main.cpp \
		./zombieHorde.cpp \
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
