CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

RM = rm -f

NAME = my_awesome_phonebook

SRCS =	Account.cpp \
		main.cpp \
		string_utils.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

./PHONY: all clean fclean re
