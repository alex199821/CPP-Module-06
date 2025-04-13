NAME = converter
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++11 #-fsanitize=address

SRCS =  main.cpp ScalarConverter.cpp SelectType.cpp HandleInt.cpp HandleFloat.cpp HandleDouble.cpp HandleChar.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re