PART1 := part1_runner
PART3 := part3_runner

all: part1 part3
	./$(PART1)
	./$(PART3)

part1 : ../libft.a test_part1.c
	cc -Wall -Wextra -Werror test_part1.c ../libft.a -o $(PART1)
	./$(PART1)

part3 : ../libft.a test_part3.c
	gcc -Wall -Wextra -Werror test_part3.c ../libft.a -o $(PART3)
	./$(PART3)

clean:
	rm -f $(PART1) $(PART3)
