NAME=exec
CXXFLAGS= -std=c++98 -g  -Wall -Werror -Wextra
SRC=main.cpp #MutantStack.tpp
CXX=c++
OBJ:=$(patsubst %.cpp, %.o, $(SRC))

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}
clean:
	rm -f ${OBJ}
fclean:	clean
	rm -f ${NAME}
re: fclean all

.PHONY: all re fclean cl