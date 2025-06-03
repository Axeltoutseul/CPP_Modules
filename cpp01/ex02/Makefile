CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

RM = rm -f

NAME = hi_this_is_brain

$(NAME): main.o
	$(CC) $(CPPFLAGS) main.o -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) main.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
