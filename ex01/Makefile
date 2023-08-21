NAME	=	Phonebook
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM 		=	rm -rf

SRCS	=	PhoneBook.cpp \
			Contact.cpp \
			main.cpp

INCLUDES =	PhoneBook.hpp \
			Contact.hpp

OBJS	=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDES)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS) $(NAME)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all