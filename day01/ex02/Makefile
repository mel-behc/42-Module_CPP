CC = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
NAME_M = exec
SRC = ./main.cpp 
	

OBJ = $(SRC:.cpp=.o)

all: $(NAME_M)

$(NAME_M): $(OBJ)
	$(CC) $(OBJ) -o $(NAME_M)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME_M)

re : fclean all