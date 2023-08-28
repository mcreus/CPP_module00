NAME	=	PhoneBook

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	Contact.cpp PhoneBook.cpp main.cpp
OBJS	=	$(SRCS:.cpp=.o)

RM		=	rm -rf

.c.o:
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
		@echo "\033[0;33m\nCOMPILATION DE PHONEBOOK\n"
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "\033[1;32m\nCOMPILATION REUSSIE\n"

clean:
		@echo "\033[0;31m\nDELETING OBJS\n"
		@$(RM) $(OBJS)
		@echo "\033[1;32m\nDONE\n"

fclean: clean
		@echo "\033[0;31m\nDELETING PHONEBOOK\n"
		@$(RM) $(NAME)
		@echo "\033[1;32m\nDONE\n"

re: fclean all