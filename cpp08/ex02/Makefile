CC = c++

CXXFLAGS = -Wall -Wextra -Werror -MMD -std=c++98 -g

RM = rm -f

NAME = mutant_stack

OBJS_DIR = objects/

OBJS = $(addprefix $(OBJS_DIR), main.o)

DEPS = $(addprefix $(OBJS_DIR), main.d)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)main.o: main.cpp | $(OBJS_DIR)
	$(CC) $(CXXFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS)
	$(RM) -r $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)

./PHONY: all clean fclean re