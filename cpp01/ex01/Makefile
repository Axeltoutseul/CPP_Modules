CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

RM = rm -f

NAME = moar_brainz

SRCS =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

./PHONY: all clean fclean re
