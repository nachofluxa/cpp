# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 16:36:34 by ifluxa-c          #+#    #+#              #
#    Updated: 2025/10/24 16:38:32 by ifluxa-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AnimalExec

CXXFLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++98 

SRCS =  ./main.cpp \
		./Animal.cpp \
		./Dog.cpp \
		./Cat.cpp

HEADERS = /Animal.hpp \
		./Dog.hpp \
		./Cat.hpp

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
