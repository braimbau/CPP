NAME = Materia

SRCS =	./AMateria.cpp		\
	./Character.cpp		\
	./Cure.cpp		\
	./Fire.cpp		\
	./Ice.cpp		\
	./MateriaSource.cpp	\
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
