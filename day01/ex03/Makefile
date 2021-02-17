NAME = zombiehorde

LIB = 

SRCS =	./Zombie.cpp		\
		./ZombieHorde.cpp	\
		./main.cpp

FLAG = 
FSANITIZE = -fsanitize=address -g3
CFLAGS = -Wall -Wextra -Werror

CC = clang++

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(FLAG) $(OBJS)

lib:
	make -C ./includes/libft re
	make -C ./includes/libft clean
clean:
	${RM} $(OBJS)

fclean: clean
	${RM} $(NAME)

re: fclean all
	${RM} $(OBJS)

.PHONY: all clean fclean re lib
