CC = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
NAME = exec
HEADER = Harl.hpp 
SRC = ./main.cpp \
		Harl.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all