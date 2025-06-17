CC = c++

CXXFLAGS = -Wall -Wextra -Werror -MP -MMD -std=c++98 -g

RM = rm -f

NAME = ClapTrap

DIR_NAME = objects/

MKDIR = mkdir -p

SRCS =	ClapTrap.cpp \
		main.cpp

OBJS = $(addprefix $(DIR_NAME), $(SRCS:.cpp=.o))

DEPS = $(OBJS:.o=.d)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

$(DIR_NAME):
	$(MKDIR) $(DIR_NAME)

$(DIR_NAME)%.o: %.cpp | $(DIR_NAME)
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) -r $(DIR_NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)

./PHONY: all clean fclean re
