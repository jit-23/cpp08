NAME:=exec
CXXFLAGS:= -g -Wall -Werror -Wextra -std=c++98
CXX:= c++
SRC:= main.cpp Span.cpp
OBJ:=$(patsubst %.cpp, %.o, $(SRC))

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${OBJ} ${CXXFLAGS} -o ${NAME} 

clean:
	rm -f ${OBJ}
fclean: clean
	rm -f ${NAME}
re: fclean all

.PHONY: all re  fclean clean 
