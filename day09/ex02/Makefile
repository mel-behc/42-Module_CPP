CC = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
NAME = PmergeMe
HEADER = PmergeMe.hpp
SRC = ./main.cpp \
	./PmergeMe.cpp \
	./checkInput.cpp \
	./sortList.cpp \
	./sortVector.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all