/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_part2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:36:13 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/21 13:10:07 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <assert.h> // assert()
#include <stdio.h> 	// printf()

#include <unistd.h> // write(), read(), close()
#include <fcntl.h> // open(), O_RDONLY, O_WRONLY, O_RDWR

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

void test_ft_putchar_fd(void)
{
	printf("Testing putchar_fd...\n");

	int fd = open("test.txt", O_RDWR);
	printf("FD: %d\n", fd);
	if (fd > 0)
		ft_putchar_fd('x', fd);
	close(fd);

	printf("All putchar_fd tests passed.\n\n");
}

int main(void)
{
	printf("Initiating tests for Part 2...\n");
	printf("-------------------\n\n");

	test_ft_strjoin();
	test_ft_putchar_fd();

	printf("-------------------\n");
	printf("All Part 2 tests passed.\n");
	return 0;
}
