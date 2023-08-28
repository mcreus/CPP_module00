NAME	=	megaphone

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	megaphone.cpp

OBJS	=	$(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean: 
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all