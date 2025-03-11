# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 10:28:27 by nachofluxa        #+#    #+#              #
#    Updated: 2025/03/04 10:45:38 by nachofluxa       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FixedExec

CXXFLAGS = -Wall -Werror -Wextra -fsanitize=address#-std=c++98 

SRCS = 	./main.cpp \
		./Fixed.cpp

HEADERS = ./Fixed.hpp 

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

