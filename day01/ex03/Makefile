CC = g++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
NAME = exec
HEADER = Weapon.hpp 
SRC = ./main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp 

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