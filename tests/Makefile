NAME := test_runner

all: $(NAME)
	./$(NAME)

$(NAME): ../libft.a test_libft.c
	cc -Wall -Wextra -Werror test_libft.c ../libft.a -o $(NAME)

clean:
	rm -f $(NAME)
