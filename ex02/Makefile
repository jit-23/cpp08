NAME=exec
CFLAGS= -std=c++98 -Wall -Werror -Wextra -g
SRC=main.cpp Span.cpp
CC=c++
OBJ:=$(patsubst %.cpp, %.o, $(SRC))

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}
clean:
	rm -f ${OBJ}
fclean:	clean
	rm -f ${NAME}
re: fclean all

.PHONY: all re fclean cl