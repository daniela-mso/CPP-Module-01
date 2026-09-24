NAME	= unnecessary_violence

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS	= $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)


clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re