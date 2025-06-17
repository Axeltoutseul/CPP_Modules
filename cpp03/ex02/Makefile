CC = c++

CXXFLAGS = -Wall -Wextra -Werror -MP -MMD -std=c++98 -g

RM = rm -f

NAME = ClapTrap

DIR_NAME = objects/

MKDIR = mkdir -p $(DIR_NAME)

SRCS =	ClapTrap.cpp \
		FragTrap.cpp \
		main.cpp \
		ScavTrap.cpp

OBJS = $(addprefix $(DIR_NAME), $(SRCS:.cpp=.o))

DEPS = $(OBJS:.o=.d)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

$(DIR_NAME)%.o: %.cpp
	$(MKDIR)
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) -r $(DIR_NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)

./PHONY: all clean fclean re
