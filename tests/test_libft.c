#include "../libft.h"
#include <assert.h>
#include <stdio.h>

void test_ft_isalpha(void)
{
	printf("Testing isalpha...\n");
	assert(ft_isalpha('a')  ==  1);
	assert(ft_isalpha('A')  ==  1);
	assert(ft_isalpha(' ')  ==  0);
	assert(ft_isalpha('1')  ==  0);
	assert(ft_isalpha('$')  ==  0);
	assert(ft_isalpha(122)  ==  1);
	assert(ft_isalpha(90)   ==  1);
	printf("All isalpha tests passed.\n\n");
}

void test_ft_isdigit(void)
{
	printf("Testing isdigit...\n");
	assert(ft_isdigit('a')  ==  0);
	assert(ft_isdigit('A')  ==  0);
	assert(ft_isdigit(' ')  ==  0);
	assert(ft_isdigit('%')  ==  0);
	assert(ft_isdigit('1')  ==  1);
	assert(ft_isdigit('0')  ==  1);
	assert(ft_isdigit('9')  ==  1);
	assert(ft_isdigit(122)  ==  0);
	assert(ft_isdigit(90)   ==  0);
	assert(ft_isdigit(48)   ==  1);
	assert(ft_isdigit(57)   ==  1);
	printf("All isdigit tests passed.\n\n");
}

void test_ft_isalnum(void)
{
	printf("Testing isalnum...\n");
	assert(ft_isalnum('a')	==  1);
	assert(ft_isalnum('A')  ==  1);
	assert(ft_isalnum(' ')  ==  0);
	assert(ft_isalnum('%')  ==  0);
	assert(ft_isalnum('1')  ==  1);
	assert(ft_isalnum('0')  ==  1);
	assert(ft_isalnum('9')  ==  1);
	assert(ft_isalnum(122)  ==  1);
	assert(ft_isalnum(90)   ==  1);
	assert(ft_isalnum(48)   ==  1);
	assert(ft_isalnum(57)   ==  1);
	printf("All isalnum tests passed.\n\n");
}

void test_ft_isascii(void)
{
	printf("Testing isascii...\n");
	assert(ft_isascii('a')	==  1);
	assert(ft_isascii('A')	==  1);
	assert(ft_isascii(' ')	==  1);
	assert(ft_isascii('%')	==  1);
	assert(ft_isascii('1')	==  1);
	assert(ft_isascii('0')	==  1);
	assert(ft_isascii('9')	==  1);
	assert(ft_isascii(122)	==  1);
	assert(ft_isascii(90)	==  1);
	assert(ft_isascii(48)	==  1);
	assert(ft_isascii(57)	==  1);
	assert(ft_isascii(128)	==  0);
	assert(ft_isascii(4000)	==  0);
	assert(ft_isascii(-1)	==  0);
	assert(ft_isascii(-9999)==  0);
	printf("All isascii tests passed.\n\n");
}


void test_ft_isprint(void)
{
	printf("Testing isprint...\n");
	assert(ft_isprint('a')	==  1);
	assert(ft_isprint('A')	==  1);
	assert(ft_isprint(' ')	==  1);
	assert(ft_isprint('%')	==  1);
	assert(ft_isprint('1')	==  1);
	assert(ft_isprint('0')	==  1);
	assert(ft_isprint('9')	==  1);
	assert(ft_isprint(122)	==  1);
	assert(ft_isprint(90)	==  1);
	assert(ft_isprint(48)	==  1);
	assert(ft_isprint(57)	==  1);
	assert(ft_isprint(128)	==  0);
	assert(ft_isprint(4000)	==  0);
	assert(ft_isprint(-1)	==  0);
	assert(ft_isprint(-9999)==  0);
	assert(ft_isprint(6)	==  0);
	assert(ft_isprint(7)	==  1);
	assert(ft_isprint(13)	==  1);
	assert(ft_isprint(14)	==  0);
	printf("All isprint tests passed.\n\n");
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

	printf("-------------------\n");
	printf("All tests passed.\n");
	return 0;
}
