NAME = phoneBookExec

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = 	Contact.cpp \
		PhoneBook.cpp \
		source.cpp

HEADERS = ./Contact/Contact.h \
		  ./PhoneBook/PhoneBook.h

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
