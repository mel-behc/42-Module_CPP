CC = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
NAME = btc
HEADER = BitcoinExchange.hpp
SRC = ./main.cpp \
	./BitcoinExchange.cpp \
	./inputFileChecker.cpp \

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