CC = g++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
NAME_M = log
HEADER = Account.hpp 
SRC = 	./Account.cpp \
			./tests.cpp 

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