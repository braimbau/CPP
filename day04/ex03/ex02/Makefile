NAME = Warhammer40k

SRCS =	./AssaultTerminator.cpp	\
	./DeathAngels.cpp	\
	./TacticalMarine.cpp	\
	./Squad.cpp		\
	./main.cpp

FSANITIZE = -fsanitize=address -g3

CXXFLAGS = -Wall -Wextra -Werror

CXX = clang++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJS)

clean:
	${RM} $(OBJS)

fclean: clean
	${RM} $(NAME)

re: fclean all
	${RM} $(OBJS)

.PHONY: all clean fclean re lib
