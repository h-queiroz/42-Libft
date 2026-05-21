PART1 := part1_runner
PART2 := part2_runner
PART3 := part3_runner

all: part1 part2 part3
	./$(PART1)
	./$(PART2)
	./$(PART3)

part1: ../libft.a test_part1.c
	cc -Wall -Wextra -Werror -lbsd test_part1.c ../libft.a -o $(PART1)
	./$(PART1)

part2: ../libft.a test_part2.c
	gcc -Wall -Wextra -Werror test_part2.c ../libft.a -o $(PART2)
	./$(PART2)

part3: ../libft.a test_part3.c
	gcc -Wall -Wextra -Werror test_part3.c ../libft.a -o $(PART3)
	./$(PART3)

clean:
	rm -f $(PART1) $(PART2) $(PART3)
