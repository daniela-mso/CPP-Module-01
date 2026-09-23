NAME	= zombie_horde

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= main.cpp Zombie.cpp zombieHorde.cpp

OBJS	= $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all \
		--track-origins=yes  ./$(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re