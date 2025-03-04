# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 09:14:07 by nachofluxa        #+#    #+#              #
#    Updated: 2025/03/04 09:14:59 by nachofluxa       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HarlExec

CXXFLAGS = -Wall -Werror -Wextra -fsanitize=address#-std=c++98 

SRCS = 	./main.cpp \
		./Harl.cpp
HEADERS = ./Harl.hpp 

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
