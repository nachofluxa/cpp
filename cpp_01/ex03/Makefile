# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 13:18:04 by nachofluxa        #+#    #+#              #
#    Updated: 2025/02/18 13:19:19 by nachofluxa       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = WarExec

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRCS = 	./main.cpp \
		./Weapon.cpp \
		./HumanA.cpp \
		./HumanB.cpp 
HEADERS = ./HumanA.hpp \
		./HumanB.hpp \
		./Weapon.hpp

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
