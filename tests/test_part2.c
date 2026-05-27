/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_part2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:36:13 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/26 14:40:28 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <assert.h> // assert()
#include <stdio.h> 	// printf()

#include <unistd.h> // write(), read(), close()
#include <fcntl.h> // open(), O_RDONLY, O_WRONLY, O_RDWR, O_APPEND


static void upgrade(unsigned int x, char *c)
{
	*c += x;
}

static char upgrade2(unsigned int x, char c) { return (c + x); }

void test_ft_substr(void)
{
	typedef struct s_test {
		const char *big_string;
		unsigned int index;
		size_t len;
		char *expected;
	} t_test;

	printf("Testing substr...\n");

	t_test a = { "All we have to decide is what to do with the time that is given us.", 55, 8, "is given"};
	char *resultA = ft_substr(a.big_string, a.index, a.len);
	// printf("Testing A result: %s\n", resultA);
	// printf("Expected: %s\n\n", a.expected);
	assert(ft_strncmp(resultA, a.expected, 100) == 0);

	t_test b = { "" , 10, 10 , ""};
	char *resultB = ft_substr(b.big_string, b.index, b.len);
	// printf("Testing B result: %s\n", resultB[0] == '\0' ? "(Empty)" : resultB);
	// printf("Expected: %s\n\n", b.expected[0] == '\0' ? "(Empty)" : b.expected);
	assert(ft_strncmp(resultB, b.expected, 100) == 0);

	char *resultC = ft_substr(NULL, 10, 10);
	// printf("Testing C result: %s\n", resultC);
	// printf("Expected: (null)\n\n");
	assert(resultC == NULL);

	t_test d = { "School", 2, 3, "hoo"};
	char *resultD = ft_substr(d.big_string, d.index, d.len);
	// printf("Testing D result: %s\n", resultD);
	// printf("Expected: %s\n\n", d.expected);
	assert(ft_strncmp(resultD, d.expected, 100) == 0);

	t_test e = { "Hello", 0, 20, "Hello"};
	char *resultE = ft_substr(e.big_string, e.index, e.len);
	// printf("Testing E result: %s\n", resultE[0] == '\0' ? "(Empty)" : resultE);
	// printf("Expected: %s\n\n", e.expected[0] == '\0' ? "(Empty)" : e.expected);
	assert(ft_strncmp(resultE, e.expected, 100) == 0);

	printf("All substr tests passed.\n\n");
}

void test_ft_strjoin(void)
{
	printf("Testing strjoin...\n");

	const char *t1 = "Hello ";
	const char *t2 = "World!";

	char *myresult = ft_strjoin(t1, t2);
	char *expected = "Hello World!";
	// printf("Diferença: %d\n", ft_strncmp(myresult, expected, 100));
	assert(ft_strncmp(myresult, expected, 5) == 0);

	const char *t3 = "";
	const char *t4 = "";

	myresult = ft_strjoin(t3, t4);
	expected = "";
	// printf("Diferença: %d\n", ft_strncmp(myresult, expected, 100));
	assert(ft_strncmp(myresult, expected, 5) == 0);

	const char *t5 = "Dih";
	const char *t6 = "Hec";

	myresult = ft_strjoin(t5, t6);
	expected = "DihHec";
	// printf("Diferença: %d\n", ft_strncmp(myresult, expected, 100));
	assert(ft_strncmp(myresult, expected, 10) == 0);

	printf("All strjoin tests passed.\n\n");
}

void test_ft_strtrim()
{
	typedef struct	s_test {
		const char *string;
		const char *set;
		char *expected;
	}				t_test;

	printf("Testing strtrim...\n");

	t_test a = {"zzz...Hello World!!!z", "z.", "Hello World!!!"};
	char *resultA = ft_strtrim(a.string, a.set);
	// printf("ResultA: \"%s\"\n", resultA);
	// printf("Expected: \"%s\"\n\n", a.expected);
	assert(ft_strncmp(resultA, a.expected, 100) == 0);

	t_test b = {"   With simple spaces   ", " ", "With simple spaces"};
	char *resultB = ft_strtrim(b.string, b.set);
	// printf("ResultB: \"%s\"\n", resultB);
	// printf("Expected: \"%s\"\n\n", b.expected);
	assert(ft_strncmp(resultB, b.expected, 100) == 0);

	t_test c = {"Tabs at the end		", "	", "Tabs at the end"};
	char *resultC = ft_strtrim(c.string, c.set);
	// printf("ResultC: \"%s\"\n", resultC);
	// printf("Expected: \"%s\"\n\n", c.expected);
	assert(ft_strncmp(resultC, c.expected, 100) == 0);

	t_test d = {".......ddddddoots at the start", ".", "ddddddoots at the start"};
	char *resultD = ft_strtrim(d.string, d.set);
	// printf("ResultD: \"%s\"\n", resultD);
	// printf("Expected: \"%s\"\n\n", d.expected);
	assert(ft_strncmp(resultD, d.expected, 100) == 0);

	printf("All strtrim tests passed.\n\n");
}

void test_ft_strmapi(void)
{
	printf("Testing strmapi...\n");

	char *resultA = ft_strmapi("aaaaaaa", &upgrade2);
	printf("Result after Upgrade: %s\n", resultA);
	assert(ft_strncmp(resultA, "abcdefg", 100) == 0);

	char *resultB = ft_strmapi("AAAAAAA", &upgrade2);
	printf("Result after Upgrade: %s\n", resultB);
	assert(ft_strncmp(resultB, "ABCDEFG", 100) == 0);

	char *resultC = ft_strmapi("11111111", &upgrade2);
	printf("Result after Upgrade: %s\n", resultC);
	assert(ft_strncmp(resultC, "12345678", 100) == 0);

	char *resultD = ft_strmapi("1234", &upgrade2);
	printf("Result after Upgrade: %s\n", resultD);
	printf("Expected: 1357\n");
	assert(ft_strncmp(resultD, "1357", 100) == 0);

	printf("All strmapi tests passed.\n\n");
}

void test_ft_striteri(void)
{
	printf("Testing striteri...\n");

	typedef struct	s_test
	{
		char message[100];
		char expected[100];
	}				t_test;

	t_test a = { "aaaaaaa", "abcdefg" };
	ft_striteri(a.message, &upgrade);
	// printf("Result after Upgrade: %s\n", a.message);
	assert(ft_strncmp(a.message, a.expected, 100) == 0);

	t_test b = { "AAAAAAA", "ABCDEFG" };
	ft_striteri(b.message, &upgrade);
	// printf("Result after Upgrade: %s\n", b.message);
	assert(ft_strncmp(b.message, b.expected, 100) == 0);

	t_test c = { "0000000000", "0123456789" };
	ft_striteri(c.message, &upgrade);
	// printf("Result after Upgrade: %s\n", c.message);
	assert(ft_strncmp(c.message, c.expected, 100) == 0);

	printf("All striteri tests passed.\n\n");
}

void test_ft_putchar_fd(void)
{
	printf("Testing putchar_fd...\n");

	int fd = open("test.txt", O_RDWR);
	// printf("FD: %d\n", fd);
	if (fd > 0)
		ft_putchar_fd('x', fd);
	close(fd);

	printf("All putchar_fd tests passed.\n\n");
}

void test_ft_putstr_fd(void)
{
	printf("Testing putchar_fd...\n");

	int fd = open("test.txt", O_RDWR);
	// printf("FD: %d\n", fd);
	if (fd > 0)
		ft_putstr_fd("This is my test", fd);
	close(fd);

	printf("All putstr_fd tests passed.\n\n");
}

void test_ft_putendl_fd(void)
{
	printf("Testing putendl_fd...\n");

	int fd = open("test.txt", O_RDWR);
	// printf("FD: %d\n", fd);
	if (fd > 0)
		ft_putendl_fd("This is my test", fd);
	close(fd);

	printf("All putendl_fd tests passed.\n\n");
}

void test_ft_putnbr_fd(void)
{
	printf("Testing putnbr_fd...\n");

	int fd = open("test.txt", O_WRONLY);
	// printf("FD: %d\n", fd);
	if (fd > 0)
		ft_putnbr_fd(78931832, fd);
	close(fd);

	printf("All putnbr_fd tests passed.\n\n");

}

int main(void)
{
	printf("Initiating tests for Part 2...\n");
	printf("-------------------\n\n");

	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_strmapi();
	test_ft_striteri();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();

	printf("-------------------\n");
	printf("All Part 2 tests passed.\n");
	return 0;
}
