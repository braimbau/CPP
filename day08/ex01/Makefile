NAME = Span

SRCS =	./main.cpp \
		./span.cpp

FSANITIZE = -fsanitize=address -g3

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

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
