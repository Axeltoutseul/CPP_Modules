CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

RM = rm -f

NAME = megaphone

SRCS = megaphone.cpp

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
