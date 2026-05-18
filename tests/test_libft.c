#include "../libft.h"

#include <assert.h> // assert()
#include <stdio.h> 	// printf()

#include <ctype.h> 	// isalpha(), isdigit(), isalnum(), isascii(), isprint()
#include <string.h> // strlen(), memset(), bzero()

void test_ft_isalpha(void)
{
	printf("Testing isalpha...\n");
	assert((ft_isalpha('a')	==	1)	==  (isalpha('a')	!= 0));
	assert((ft_isalpha('A')	==	1)	==  (isalpha('A')	!= 0));
	assert((ft_isalpha(' ')	==	0)	==  (isalpha(' ')	== 0));
	assert((ft_isalpha('1')	==	0)	==  (isalpha('1')	== 0));
	assert((ft_isalpha('$')	==	0)	==  (isalpha('$')	== 0));
	assert((ft_isalpha(122)	==	1)	==  (isalpha(122)	!= 0)); // 'z'
	assert((ft_isalpha(90)	==	1)	==  (isalpha(90)	!= 0)); // 'Z'
	printf("All isalpha tests passed.\n\n");
}

void test_ft_isdigit(void)
{
	printf("Testing isdigit...\n");
	assert((ft_isdigit('a')	==	0)	==	(isdigit('a')	== 0));
	assert((ft_isdigit('A')	==	0)	==	(isdigit('A')	== 0));
	assert((ft_isdigit(' ')	==	0)	==	(isdigit(' ')	== 0));
	assert((ft_isdigit('%')	==	0)	==	(isdigit('%')	== 0));
	assert((ft_isdigit('1')	==	1)	==	(isdigit('1')	!= 0));
	assert((ft_isdigit('0')	==	1)	==	(isdigit('0')	!= 0));
	assert((ft_isdigit('9')	==	1)	==	(isdigit('9')	!= 0));
	assert((ft_isdigit(122)	==	0)	==	(isdigit(122)	== 0)); // 'z'
	assert((ft_isdigit(90) 	==	0)	==	(isdigit(90)	== 0)); // 'Z'
	assert((ft_isdigit(48) 	==	1)	==	(isdigit(48)	!= 0)); // '0'
	assert((ft_isdigit(57) 	==	1)	==	(isdigit(57)	!= 0)); // '9'
	printf("All isdigit tests passed.\n\n");
}

void test_ft_isalnum(void)
{
	printf("Testing isalnum...\n");
	assert((ft_isalnum('a')	==  1)	==	(isalnum('a')	!= 0));
	assert((ft_isalnum('A')	==  1)	==	(isalnum('A')	!= 0));
	assert((ft_isalnum(' ')	==  0)	==	(isalnum(' ')	== 0));
	assert((ft_isalnum('%')	==  0)	==	(isalnum('%')	== 0));
	assert((ft_isalnum('1')	==  1)	==	(isalnum('1')	!= 0));
	assert((ft_isalnum('0')	==  1)	==	(isalnum('0')	!= 0));
	assert((ft_isalnum('9')	==  1)	==	(isalnum('9')	!= 0));
	assert((ft_isalnum(122)	==  1)	==	(isalnum(122)	!= 0)); // 'z'
	assert((ft_isalnum(90) 	==  1)	==	(isalnum(90)	!= 0)); // 'Z'
	assert((ft_isalnum(48) 	==  1)	==	(isalnum(48)	!= 0)); // '0'
	assert((ft_isalnum(57) 	==  1)	==	(isalnum(57)	!= 0)); // '9'
	printf("All isalnum tests passed.\n\n");
}

void test_ft_isascii(void)
{
	printf("Testing isascii...\n");
	assert((ft_isascii('a')		==  1) == (isascii('a')		!= 0));
	assert((ft_isascii('A')		==  1) == (isascii('A')		!= 0));
	assert((ft_isascii(' ')		==  1) == (isascii(' ')		!= 0));
	assert((ft_isascii('%')		==  1) == (isascii('%')		!= 0));
	assert((ft_isascii('1')		==  1) == (isascii('1')		!= 0));
	assert((ft_isascii('0')		==  1) == (isascii('0')		!= 0));
	assert((ft_isascii('9')		==  1) == (isascii('9')		!= 0));
	assert((ft_isascii(122)		==  1) == (isascii(122)		!= 0));
	assert((ft_isascii(90)		==  1) == (isascii(90)		!= 0));
	assert((ft_isascii(48)		==  1) == (isascii(48)		!= 0));
	assert((ft_isascii(57)		==  1) == (isascii(57)		!= 0));
	assert((ft_isascii(128)		==  0) == (isascii(128) 	== 0));
	assert((ft_isascii(4000)	==  0) == (isascii(4000)	== 0));
	assert((ft_isascii(-1)		==  0) == (isascii(-1) 		== 0));
	assert((ft_isascii(-9999)	==  0) == (isascii(-9999)	== 0));
	printf("All isascii tests passed.\n\n");
}

void test_ft_isprint(void)
{
	printf("Testing isprint...\n");
	assert((ft_isprint('a')		==  1) == (isprint('a')		!= 0));
	assert((ft_isprint('A')		==  1) == (isprint('A')		!= 0));
	assert((ft_isprint(' ')		==  1) == (isprint(' ')		!= 0));
	assert((ft_isprint('%')		==  1) == (isprint('%')		!= 0));
	assert((ft_isprint('1')		==  1) == (isprint('1')		!= 0));
	assert((ft_isprint('0')		==  1) == (isprint('0')		!= 0));
	assert((ft_isprint('9')		==  1) == (isprint('9')		!= 0));
	assert((ft_isprint(122)		==  1) == (isprint(122)		!= 0));
	assert((ft_isprint(90) 		==  1) == (isprint(90)		!= 0));
	assert((ft_isprint(48) 		==  1) == (isprint(48)		!= 0));
	assert((ft_isprint(57) 		==  1) == (isprint(57)		!= 0));
	assert((ft_isprint(128)		==  0) == (isprint(128) 	== 0));
	assert((ft_isprint(4000)	==  0) == (isprint(4000) 	== 0));
	assert((ft_isprint(-1)		==  0) == (isprint(-1)		== 0));
	assert((ft_isprint(-9999)	==  0) == (isprint(-9999) 	== 0));
	assert((ft_isprint(6)		==  0) == (isprint(6)		== 0));
	assert((ft_isprint(7)		==  0) == (isprint(7)		== 0));
	assert((ft_isprint(13)		==  0) == (isprint(13)		== 0));
	assert((ft_isprint(14)		==  0) == (isprint(14)		== 0));
	assert((ft_isprint(31)		==  0) == (isprint(31)		== 0));
	assert((ft_isprint(32)		==  1) == (isprint(32)		!= 0));
	assert((ft_isprint(126)		==  1) == (isprint(126)		!= 0));
	assert((ft_isprint(127)		==  0) == (isprint(127)		== 0));
	printf("All isprint tests passed.\n\n");
}

void test_ft_strlen(void)
{
	char *a = "Hello, World!";
	char *b = "";
	char *c = "A";
	char *d = "Supercalifragilisticexpialidocious";
	char *e = "Before\0After";
	char *f = "X\0";
	char *g = " \t\n ";

	printf("Testing strlen...\n");

	assert(ft_strlen(a) == strlen(a));
	assert(ft_strlen(b) == strlen(b));
	assert(ft_strlen(c) == strlen(c));
	assert(ft_strlen(d) == strlen(d));
	assert(ft_strlen(e) == strlen(e));
	assert(ft_strlen(f) == strlen(f));
	assert(ft_strlen(g) == strlen(g));

	printf("All strlen tests passed.\n\n");
}

void test_ft_memset(void)
{
	unsigned int length = 20, i = 0;
	char ft_buffer[length];
	char og_buffer[length];

	while (i < length)
	{
		ft_buffer[i] = 'X';
		og_buffer[i] = 'X';
		i++;
	}
	ft_buffer[i-1] = '\0';
	og_buffer[i-1] = '\0';

	ft_memset(ft_buffer, 'A', 10);
	memset(og_buffer, 'A', 10);

	printf("Testing memset...\n");

	i = 0;
	while (i < length)
	{
		assert(ft_buffer[i] == og_buffer[i]);
		i++;
	}

	// printf("\nft_buffer at the end: %s\n", ft_buffer);
	// printf("og_buffer at the end: %s\n\n", og_buffer);

	printf("All memset tests passed.\n\n");
}

void test_ft_bzero(void)
{
	unsigned int length = 20, i = 0;
	char ft_buffer[length];
	char og_buffer[length];

	while (i < length)
	{
		ft_buffer[i] = 'X';
		og_buffer[i] = 'X';
		i++;
	}
	ft_buffer[i-1] = '\0';
	og_buffer[i-1] = '\0';

	ft_bzero(ft_buffer + 3, 10);
	bzero(og_buffer + 3, 10);

	printf("Testing bzero...\n");

	i = 0;
	while (i < length)
	{
		assert(ft_buffer[i] == og_buffer[i]);
		i++;
	}

	/*
	printf("\nft_buffer: ");
	i = 0;
	while (i < length)
	{
		printf("%c", (ft_buffer[i] == '\0') ? '0' : ft_buffer[i] );
		i++;
	}

	printf("\nog_buffer: ");
	i = 0;
	while (i < length)
	{
		printf("%c", (og_buffer[i] == '\0') ? '0' : og_buffer[i] );
		i++;
	}
	printf("\n");
	*/

	printf("All bzero tests passed.\n\n");
}

void test_ft_memcpy(void)
{
	unsigned int length = 8, i = 0;

	const char *message = "Hello, World!\0";
	char ft_buffer[20];
	char og_buffer[20];

	ft_memcpy(ft_buffer, message, length); 	// Should be "Hello, W"
	memcpy(og_buffer, message, length); 	// Should be "Hello, W"

	printf("Testing memcpy...\n");

	i = 0;
	while (i < length)
	{
		assert(ft_buffer[i] == og_buffer[i]);
		i++;
	}

	/*
	printf("\nft_buffer: ");
	i = 0;
	while (i < length)
	{
		printf("%c", ft_buffer[i]);
		i++;
	}

	printf("\nog_buffer: ");
	i = 0;
	while (i < length)
	{
		printf("%c", og_buffer[i]);
		i++;
	}
	printf("\n");
	*/

	printf("All memcpy tests passed.\n\n");
}

void test_ft_memmove(void)
{
	unsigned int length = 5, i = 0;

	char ft_buffer[] = "ABCDE";
	char og_buffer[] = "ABCDE";

	ft_memmove(ft_buffer + 2, ft_buffer, 3);
	memmove(og_buffer + 2, og_buffer, 3);

	printf("Testing memmove...\n");

	i = 0;
	while (i < length)
	{
		assert(ft_buffer[i] == og_buffer[i]);
		i++;
	}

	/*
	printf("\nft_buffer: ");
	i = 0;
	while (i < length)
	{
		printf("%c", ft_buffer[i]);
		i++;
	}

	printf("\nog_buffer: ");
	i = 0;
	while (i < length)
	{
		printf("%c", og_buffer[i]);
		i++;
	}
	printf("\n");
	*/

	printf("All memmove tests passed.\n\n");
}

int main(void)
{
	printf("Initiating tests...\n");
	printf("-------------------\n\n");

	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();

	printf("-------------------\n");
	printf("All tests passed.\n");
	return 0;
}
