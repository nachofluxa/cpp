# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/28 14:41:10 by nachofluxa        #+#    #+#              #
#    Updated: 2025/02/28 14:42:52 by nachofluxa       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec

CXXFLAGS = -Wall -Werror -Wextra -fsanitize=address#-std=c++98 

SRCS = 	./main.cpp \

OBJS = $(SRCS:.cpp=.o)

CXX = clang++

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
