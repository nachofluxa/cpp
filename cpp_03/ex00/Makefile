# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 19:35:06 by nachofluxa        #+#    #+#              #
#    Updated: 2025/10/24 11:20:16 by nachofluxa       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClanTrappExec

CXXFLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++98 

SRCS = 	./main.cpp \
		./ClapTrap.cpp

HEADERS = ./ClapTrap.hpp 

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

