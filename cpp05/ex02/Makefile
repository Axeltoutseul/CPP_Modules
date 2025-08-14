CC = c++

CXXFLAGS = -Wall -Wextra -Werror -MMD -std=c++98 -g

RM = rm -f

NAME = AForm

OBJS_DIR = objects/

SRCS =	AForm.cpp \
		Bureaucrat.cpp \
		main.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp

OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

DEPS = $(OBJS:.o=.d)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: %.cpp | $(OBJS_DIR)
	$(CC) $(CXXFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS)
	$(RM) -r $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)

./PHONY: all clean fclean re
