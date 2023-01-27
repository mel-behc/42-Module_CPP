CC = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
NAME_M = zombie
HEADER = Zombie.hpp
SRC = ./main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME_M)

$(NAME_M): $(OBJ)
	$(CC) $(OBJ) -o $(NAME_M)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME_M)

re : fclean all