CC = g++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
NAME = exec
HEADER = Fixed.hpp 
SRC = ./main.cpp \
		Fixed.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all