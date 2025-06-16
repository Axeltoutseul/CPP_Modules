CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

RM = rm -f

NAME = Animals

SRCS =	Animal.cpp \
		Brain.cpp \
		Cat.cpp \
		Dog.cpp \
		main.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

./PHONY: all clean fclean re
