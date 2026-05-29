/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_part1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 23:29:05 by hector            #+#    #+#             */
/*   Updated: 2026/05/25 14:28:06 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <assert.h> // assert()
#include <stdio.h> 	// printf()
#include <string.h> // strlen(), memset(), bzero(), memcpy(), strlcat(), strchr(), strrchr(), strncmp(), strdup()

#include <ctype.h> 	// isalpha(), isdigit(), isalnum(), isascii(), isprint(), toupper(), tolower()
#include <stdlib.h>	// atoi()

size_t 	strlcpy(char *dst, const char *src, size_t size); 			// For 42 machines where doesn't have it implemented by default
size_t 	strlcat(char *dst, const char *src, size_t size); 			// For 42 machines where doesn't have it implemented by default
char 	*strnstr(const char *big, const char *little, size_t len); 	// For 42 machines where doesn't have it implemented by default

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
	// char *h = NULL;

	printf("Testing strlen...\n");

	assert(ft_strlen(a) == strlen(a));
	assert(ft_strlen(b) == strlen(b));
	assert(ft_strlen(c) == strlen(c));
	assert(ft_strlen(d) == strlen(d));
	assert(ft_strlen(e) == strlen(e));
	assert(ft_strlen(f) == strlen(f));
	assert(ft_strlen(g) == strlen(g));
	// assert(ft_strlen(h) == strlen(h));

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
	unsigned int length = 10, i = 0;

	printf("Testing memmove...\n");

	// Test1
	char ft_buffer[] = "ABCDEFGHIJ";
	char og_buffer[] = "ABCDEFGHIJ";
	
	ft_memmove(ft_buffer, ft_buffer + 1, 3);
	memmove(og_buffer, og_buffer + 1, 3);
	//
	// printf("Testing memmove...\n");
	//
	// printf("#### Test1 ####");
	// printf("\nft_buffer: ");
	// i = 0;
	// while (i < length)
	// {
	// 	printf("%c", ft_buffer[i]);
	// 	i++;
	// }
	//
	// printf("\nog_buffer: ");
	// i = 0;
	// while (i < length)
	// {
	// 	printf("%c", og_buffer[i]);
	// 	i++;
	// }
	// printf("\n");
	//
	i = 0;
	while (i < length)
	{
		assert(ft_buffer[i] == og_buffer[i]);
		i++;
	}

	// Test2
	char ft_buffer2[] = "ABCDEFGHIJ";
	char og_buffer2[] = "ABCDEFGHIJ";

	ft_memmove(ft_buffer2 + 3, ft_buffer2, 5);
	memmove(og_buffer2 + 3, og_buffer2, 5);

	// printf("#### Test2 ####");
	// printf("\nft_buffer2: ");
	// i = 0;
	// while (i < length)
	// {
	// 	printf("%c", ft_buffer2[i]);
	// 	i++;
	// }
	//
	// printf("\nog_buffer2: ");
	// i = 0;
	// while (i < length)
	// {
	// 	printf("%c", og_buffer2[i]);
	// 	i++;
	// }
	// printf("\n");

	i = 0;
	while (i < length)
	{
		assert(ft_buffer2[i] == og_buffer2[i]);
		i++;
	}

	// Test3
	char ft_buffer3[] = "ABCDEFGHIJ";
	char og_buffer3[] = "ABCDEFGHIJ";

	ft_memmove(ft_buffer3 + 3, ft_buffer3, 0);
	memmove(og_buffer3 + 3, og_buffer3, 0);
	//
	// printf("#### Test3 ####");
	// printf("\nft_buffer3: ");
	// i = 0;
	// while (i < length)
	// {
	// 	printf("%c", ft_buffer3[i]);
	// 	i++;
	// }
	//
	// printf("\nog_buffer3: ");
	// i = 0;
	// while (i < length)
	// {
	// 	printf("%c", og_buffer3[i]);
	// 	i++;
	// }
	// printf("\n");

	i = 0;
	while (i < length)
	{
		assert(ft_buffer3[i] == og_buffer3[i]);
		i++;
	}

	// Test4
	char ft_buffer4[] = "ABCDEFGHIJ";
	char og_buffer4[] = "ABCDEFGHIJ";

	ft_memmove(ft_buffer4 + 3, ft_buffer4, 0);
	memmove(og_buffer4 + 3, og_buffer4, 0);
	//
	// printf("#### Test4 ####");
	// printf("\nft_buffer4: ");
	// i = 0;
	// while (i < length)
	// {
	// 	printf("%c", ft_buffer4[i]);
	// 	i++;
	// }
	//
	// printf("\nog_buffer4: ");
	// i = 0;
	// while (i < length)
	// {
	// 	printf("%c", og_buffer4[i]);
	// 	i++;
	// }
	// printf("\n");

	i = 0;
	while (i < length)
	{
		assert(ft_buffer4[i] == og_buffer4[i]);
		i++;
	}

	printf("All memmove tests passed.\n\n");
}

void test_ft_strlcpy(void)
{
	printf("Testing strlcpy...\n");

	int i;

	// Test1
	printf("\n##### Test1 #####\n");
	const char *src = "This is my test";
	char ft_dst[100];
	char og_dst[100];

	// printf("My return: %zu\n", ft_strlcpy(ft_dst, src, 10));
	// printf("My return: %zu\n", strlcpy(og_dst, src, 10));

	assert(ft_strlcpy(ft_dst, src, 10) == strlcpy(og_dst, src, 10));

	// printf("My dst at the end \"%s\"\n", ft_dst);
	// printf("OG dst at the end \"%s\"\n", og_dst);

	i = 0;
	while (i < 10)
	{
		assert(ft_dst[i] == og_dst[i]);
		i++;
	}

	// Test2
	printf("\n##### Test2 #####\n");
	const char *src2 = "";
	char ft_dst2[100];
	char og_dst2[100];

	// printf("My return: %zu\n", ft_strlcpy(ft_dst2, src2, 10));
	// printf("My return: %zu\n", strlcpy(og_dst2, src2, 10));

	assert(ft_strlcpy(ft_dst2, src2, 10) == strlcpy(og_dst2, src2, 10));

	// printf("My dst2 at the end \"%s\"\n", ft_dst2);
	// printf("OG dst2 at the end \"%s\"\n", og_dst2);

	i = 0;
	while (ft_dst2[i] && og_dst2[i])
	{
		assert(ft_dst2[i] == og_dst2[i]);
		i++;
	}
	assert(ft_dst2[i] == og_dst2[i]);

	// Test3
	printf("\n##### Test3 #####\n");
	const char *src3 = "This is my third test";
	char ft_dst3[100];
	char og_dst3[100];

	// printf("My return: %zu\n", ft_strlcpy(ft_dst3, src3, 10));
	// printf("My return: %zu\n", strlcpy(og_dst3, src3, 10));

	assert(ft_strlcpy(ft_dst3, src3, 50) == strlcpy(og_dst3, src3, 50));

	// printf("My dst3 at the end \"%s\"\n", ft_dst3);
	// printf("OG dst3 at the end \"%s\"\n", og_dst3);

	i = 0;
	while (ft_dst3[i] && og_dst3[i] && i < 50)
	{
		assert(ft_dst3[i] == og_dst3[i]);
		i++;
	}
	assert(ft_dst3[i] == og_dst3[i]);

	printf("All strlcpy tests passed.\n\n");
}

void test_ft_strlcat(void)
{
	printf("Testing strlcat...\n");

	char my_dest1[10] = "Hello, ";
	char og_test1[10] = "Hello, ";
	const char *src1= "World";

	size_t res1 = ft_strlcat(my_dest1, src1, sizeof(my_dest1));
	size_t test1 = strlcat(og_test1, src1, sizeof(og_test1));

	printf("My final result \t\"%s\". Final length: %zu\n", my_dest1, res1);
	printf("OG result \t\t\"%s\". Final length: %zu\n", og_test1, test1);

	assert(ft_strncmp(my_dest1, og_test1, 100) == 0);
	assert(res1 == test1);

	printf("\n####################\n");

	char my_dest2[10] = "";
	char og_test2[10] = "";
	const char *src2= "";

	size_t res2 = ft_strlcat(my_dest2, src2, sizeof(my_dest2));
	size_t test2 = strlcat(og_test2, src2, sizeof(og_test2));

	printf("\nMy final result \t\"%s\". Final length: %zu\n", my_dest2, res2);
	printf("OG result \t\t\"%s\". Final length: %zu\n", og_test2, test2);

	assert(ft_strncmp(my_dest2, og_test2, 100) == 0);
	assert(res2 == test2);

	printf("\n####################\n");

	char my_dest3[10] = "";
	char og_test3[10] = "";
	const char *src3= "other empty";

	size_t res3 = ft_strlcat(my_dest3, src3, sizeof(my_dest3));
	size_t test3 = strlcat(og_test3, src3, sizeof(og_test3));

	printf("\nMy final result \t\"%s\". Final length: %zu\n", my_dest3, res3);
	printf("OG result \t\t\"%s\". Final length: %zu\n", og_test3, test3);

	assert(ft_strncmp(my_dest3, og_test3, 100) == 0);
	assert(res3 == test3);

	printf("\n####################\n");

	char my_dest4[50] = "src empty";
	char og_test4[50] = "src empty";
	const char *src4= "";

	size_t res4 = ft_strlcat(my_dest4, src4, sizeof(my_dest4));
	size_t test4 = strlcat(og_test4, src4, sizeof(og_test4));

	printf("\nMy final result \t\"%s\". Final length: %zu\n", my_dest4, res4);
	printf("OG result \t\t\"%s\". Final length: %zu\n", og_test4, test4);

	assert(ft_strncmp(my_dest4, og_test4, 100) == 0);
	assert(res4 == test4);

	printf("\n####################\n");

	char my_dest5[30]; ft_memset(my_dest5, 0, 30);
	char og_dest5[30]; ft_memset(og_dest5, 0, 30);
	const char *src5 = (char *)"AAAAAAAAA";
	my_dest5[0] = 'B';
	og_dest5[0] = 'B';

	size_t res5 = ft_strlcat(my_dest5, src5, sizeof(my_dest5));
	size_t test5 = strlcat(og_dest5, src5, sizeof(og_dest5));

	printf("\nMy final result \t\"%s\". Final length: %zu\n", my_dest5, res5);
	printf("OG result \t\t\"%s\". Final length: %zu\n", og_dest5, test5);

	assert(ft_strncmp(my_dest5, og_dest5, 100) == 0);
	assert(res5 == test5);

	printf("\n####################\n");

	char my_dest6[10]; 
	char og_dest6[10];
	const char *src6 = (char *)"lorem ipsum dolor sit amet";
	my_dest6[0] = 'a';
	og_dest6[0] = 'a';

	size_t res6 = ft_strlcat(my_dest6, src6, 0);
	size_t test6 = strlcat(og_dest6, src6, 0);

	printf("\nMy final result \t\"%s\". Final length: %zu\n", my_dest6, res6);
	printf("OG result \t\t\"%s\". Final length: %zu\n", og_dest6, test6);

	assert(ft_strncmp(my_dest6, og_dest6, 100) == 0);
	assert(res6 == test6);

	printf("All strlcat tests passed.\n\n");
}

void test_ft_toupper(void)
{
	printf("Testing toupper...\n");

	// printf("Og:		%c\n", toupper('a'));
	// printf("Mine:	%c\n", ft_toupper('a'));

	assert(ft_toupper('a')	== toupper('a'));
	assert(ft_toupper('z')	== toupper('z'));
	assert(ft_toupper('A')	== toupper('A'));
	assert(ft_toupper('Z')	== toupper('Z'));
	assert(ft_toupper('1')	== toupper('1'));
	assert(ft_toupper('%')	== toupper('%'));
	assert(ft_toupper(' ')	== toupper(' '));
	assert(ft_toupper(120)	== toupper(120)); 	// x
	assert(ft_toupper(88) 	== toupper(88)); 	// X
	assert(ft_toupper('\0')	== toupper('\0'));
	assert(ft_toupper('\n') == toupper('\n'));

	printf("All toupper tests passed.\n\n");
}

void test_ft_tolower(void)
{
	printf("Testing tolower...\n");

	// printf("Og:		%c\n", tolower('a'));
	// printf("Mine:	%c\n", ft_tolower('a'));

	assert(ft_tolower('a')	== tolower('a'));
	assert(ft_tolower('z')	== tolower('z'));
	assert(ft_tolower('A')	== tolower('A'));
	assert(ft_tolower('Z')	== tolower('Z'));
	assert(ft_tolower('1')	== tolower('1'));
	assert(ft_tolower('%')	== tolower('%'));
	assert(ft_tolower(' ')	== tolower(' '));
	assert(ft_tolower(120)	== tolower(120)); 	// x
	assert(ft_tolower(88) 	== tolower(88)); 	// X
	assert(ft_tolower('\0')	== tolower('\0'));
	assert(ft_tolower('\n') == tolower('\n'));

	printf("All tolower tests passed.\n\n");
}

void test_ft_strchr(void)
{
	typedef struct s_test {
		char text[100];
		char search;
	}	t_test;

	t_test a = {"This is my first test", 'm'};
	t_test b = {"This is my second test", ' '};
	t_test c = {"Hello World.", '.'};
	t_test d = {"", 'X'};
	t_test e = {"Non existing upper x", 'X'};
	t_test f = {"Break line \n at the middle", '\n'};
	t_test g = {"Pointing at the terminator", '\0'};

	printf("Testing strchr...\n");

	assert(ft_strchr(a.text, a.search)	== strchr(a.text, a.search));
	assert(ft_strchr(b.text, b.search)	== strchr(b.text, b.search));
	assert(ft_strchr(c.text, c.search)	== strchr(c.text, c.search));
	assert(ft_strchr(d.text, d.search)	== strchr(d.text, d.search));
	assert(ft_strchr(e.text, e.search)	== strchr(e.text, e.search));
	assert(ft_strchr(f.text, f.search)	== strchr(f.text, f.search));
	assert(ft_strchr(g.text, g.search)	== strchr(g.text, g.search));

	printf("All strchr tests passed.\n\n");
}

void test_ft_strrchr(void)
{
	typedef struct s_test {
		char text[100];
		char search;
	}	t_test;

	t_test a = {"This is my first test", 't'};
	t_test b = {"This is my second test", ' '};
	t_test c = {"Hello World.", '.'};
	t_test d = {"", 'X'};
	t_test e = {"Non existing upper x", 'X'};
	t_test f = {"Break line \n at the middle", '\n'};
	t_test g = {"Pointing at the terminator", '\0'};

	printf("Testing strrchr...\n");

	// printf("\nMeu: %s\n", ft_strrchr(b.text, b.search));
	// printf("Og : %s\n\n", strrchr(b.text, b.search));

	assert(ft_strrchr(a.text, a.search)	== strrchr(a.text, a.search));
	assert(ft_strrchr(b.text, b.search)	== strrchr(b.text, b.search));
	assert(ft_strrchr(c.text, c.search)	== strrchr(c.text, c.search));
	assert(ft_strrchr(d.text, d.search)	== strrchr(d.text, d.search));
	assert(ft_strrchr(e.text, e.search)	== strrchr(e.text, e.search));
	assert(ft_strrchr(f.text, f.search)	== strrchr(f.text, f.search));
	assert(ft_strrchr(g.text, g.search)	== strrchr(g.text, g.search));

	printf("All strrchr tests passed.\n\n");
}

void test_ft_strncmp(void)
{
	typedef struct s_test {
		char text1[100];
		char text2[100];
		unsigned int length;
	}	t_test;

	t_test a = {"This is my first test", "This is my first test", 100};
	t_test b = {"This is my second test", "This is my third test", 100};
	t_test c = {"Hello World.", ".", 1};
	t_test d = {"", "", 5};
	t_test e = {"Break line \n at the middle", "", 50};
	t_test f = {"", "The other test is completely empty", 5};
	t_test g = {"Non existing upper x", "\0", 10};
	t_test h = {"\0", "\0", 10};
	t_test i = {"\0", "\0", 1};
	t_test j = {"\0", "\0", 0};
	t_test k = {"This is my second test", "This is my third test", 10};
	t_test l = {"This is my second test", "This is my third test", 1};
	t_test m = {"1234", "1235", 5};
	t_test n = {"", "", 1};

	printf("Testing strncmp...\n");

	assert(ft_strncmp(a.text1, a.text2, a.length)	== strncmp(a.text1, a.text2, a.length));
	assert(ft_strncmp(b.text1, b.text2, b.length)	== strncmp(b.text1, b.text2, b.length));
	assert(ft_strncmp(c.text1, c.text2, c.length)	== strncmp(c.text1, c.text2, c.length));
	assert(ft_strncmp(d.text1, d.text2, d.length)	== strncmp(d.text1, d.text2, d.length));
	assert(ft_strncmp(e.text1, e.text2, e.length)	== strncmp(e.text1, e.text2, e.length));
	assert(ft_strncmp(f.text1, f.text2, f.length)	== strncmp(f.text1, f.text2, f.length));
	assert(ft_strncmp(g.text1, g.text2, g.length)	== strncmp(g.text1, g.text2, g.length));
	assert(ft_strncmp(h.text1, h.text2, h.length)	== strncmp(h.text1, h.text2, h.length));
	assert(ft_strncmp(i.text1, i.text2, i.length)	== strncmp(i.text1, i.text2, i.length));
	assert(ft_strncmp(j.text1, j.text2, j.length)	== strncmp(j.text1, j.text2, j.length));
	assert(ft_strncmp(k.text1, k.text2, k.length)	== strncmp(k.text1, k.text2, k.length));
	assert(ft_strncmp(l.text1, l.text2, l.length)	== strncmp(l.text1, l.text2, l.length));

	// printf("Meu retorno: %d\n", ft_strncmp(m.text1, m.text2, m.length));
	// printf("Retorno OG: %d\n", strncmp(m.text1, m.text2, m.length));
	assert(ft_strncmp(m.text1, m.text2, m.length)	== strncmp(m.text1, m.text2, m.length));

	// printf("Meu retorno: %d\n", ft_strncmp(n.text1, n.text2, n.length));
	// printf("Retorno OG: %d\n", strncmp(n.text1, n.text2, n.length));
	assert(ft_strncmp(n.text1, n.text2, n.length)	== strncmp(n.text1, n.text2, n.length));

	printf("All strncmp tests passed.\n\n");
}

void test_ft_memchr(void)
{
	printf("Testing memchr...\n");

	typedef struct	s_test {
		const char *s;
		char c;
		size_t n;
	}				t_test;

	t_test a = { "This is a test", 't', 10 };
	t_test b = { "This is a test", 't', 11 };
	t_test c = { "", 'X', 10 };
	t_test d = { "all lowercase", 'A', 100 };
	t_test e = { "Zeroes", 'Z', 0 };
	t_test f = { "Null-Terminated", '\0', 50 };
	t_test g = { "Common Text", 'm', 50 };

	// printf("\n#########Test1#########\n");
	// printf("FT exit: \"%s\"\n", (char *)ft_memchr(a.s, a.c, a.n));
	// printf("OG exit: \"%s\"\n", (char *)memchr(a.s, a.c, a.n));
	assert(ft_memchr(a.s, a.c, a.n) == memchr(a.s, a.c, a.n));

	// printf("\n#########Test2#########\n");
	// printf("FT exit: \"%s\"\n", (char *)ft_memchr(b.s, b.c, b.n));
	// printf("OG exit: \"%s\"\n", (char *)memchr(b.s, b.c, b.n));
	assert(ft_memchr(b.s, b.c, b.n) == memchr(b.s, b.c, b.n));

	// printf("\n#########Test3#########\n");
	// printf("FT exit: \"%s\"\n", (char *)ft_memchr(c.s, c.c, c.n));
	// printf("OG exit: \"%s\"\n", (char *)memchr(c.s, c.c, c.n));
	assert(ft_memchr(c.s, c.c, c.n) == memchr(c.s, c.c, c.n));

	// printf("\n#########Test4#########\n");
	// printf("FT exit: \"%s\"\n", (char *)ft_memchr(d.s, d.c, d.n));
	// printf("OG exit: \"%s\"\n", (char *)memchr(d.s, d.c, d.n));
	assert(ft_memchr(d.s, d.c, d.n) == memchr(d.s, d.c, d.n));

	// printf("\n#########Test5#########\n");
	// printf("FT exit: \"%s\"\n", (char *)ft_memchr(e.s, e.c, e.n));
	// printf("OG exit: \"%s\"\n", (char *)memchr(e.s, e.c, e.n));
	assert(ft_memchr(e.s, e.c, e.n) == memchr(e.s, e.c, e.n));

	// printf("\n#########Test6#########\n");
	// printf("FT exit: \"%s\"\n", (char *)ft_memchr(f.s, f.c, f.n));
	// printf("OG exit: \"%s\"\n", (char *)memchr(f.s, f.c, f.n));
	assert(ft_memchr(f.s, f.c, f.n) == memchr(f.s, f.c, f.n));

	// printf("\n#########Test7#########\n");
	// printf("FT exit: \"%s\"\n", (char *)ft_memchr(g.s, g.c, g.n));
	// printf("OG exit: \"%s\"\n", (char *)memchr(g.s, g.c, g.n));
	assert(ft_memchr(g.s, g.c, g.n) == memchr(g.s, g.c, g.n));

	// printf("\n#########Test8#########\n");
	char s[] = {0, 1, 2, 3, 4, 5};
	unsigned char my_char = (unsigned char)(2 + 256);
	// printf("FT exit: \"%s\"\n", (char *)ft_memchr(s, my_char, 3));
	// printf("OG exit: \"%s\"\n", (char *)memchr(s, my_char, 3));
	assert(ft_memchr(s, my_char, 3) == memchr(s, my_char, 3));

	printf("All memchr tests passed.\n\n");
}
void test_ft_memcmp(void)
{
	typedef struct s_test {
		char text1[100];
		char text2[100];
		unsigned int length;
	}	t_test;

	t_test a = {"This is my first test", "This is my first test", 100};
	t_test b = {"This is my second test", "This is my third test", 100};
	t_test c = {"Hello World.", ".", 1};
	t_test d = {"", "", 5};
	t_test e = {"Break line \n at the middle", "", 50};
	t_test f = {"", "The other test is completely empty", 5};
	t_test g = {"Non existing upper x", "\0", 10};
	t_test h = {"\0", "\0", 10};
	t_test i = {"\0", "\0", 1};
	t_test j = {"\0", "\0", 0};
	t_test k = {"This is my second test", "This is my third test", 10};
	t_test l = {"This is my second test", "This is my third test", 1};

	printf("Testing memcmp...\n");

	assert(ft_memcmp(a.text1, a.text2, a.length)	== memcmp(a.text1, a.text2, a.length));
	assert(ft_memcmp(b.text1, b.text2, b.length)	== memcmp(b.text1, b.text2, b.length));
	assert(ft_memcmp(c.text1, c.text2, c.length)	== memcmp(c.text1, c.text2, c.length));
	assert(ft_memcmp(d.text1, d.text2, d.length)	== memcmp(d.text1, d.text2, d.length));
	assert(ft_memcmp(e.text1, e.text2, e.length)	== memcmp(e.text1, e.text2, e.length));
	assert(ft_memcmp(f.text1, f.text2, f.length)	== memcmp(f.text1, f.text2, f.length));
	assert(ft_memcmp(g.text1, g.text2, g.length)	== memcmp(g.text1, g.text2, g.length));
	assert(ft_memcmp(h.text1, h.text2, h.length)	== memcmp(h.text1, h.text2, h.length));
	assert(ft_memcmp(i.text1, i.text2, i.length)	== memcmp(i.text1, i.text2, i.length));
	assert(ft_memcmp(j.text1, j.text2, j.length)	== memcmp(j.text1, j.text2, j.length));
	assert(ft_memcmp(k.text1, k.text2, k.length)	== memcmp(k.text1, k.text2, k.length));
	assert(ft_memcmp(l.text1, l.text2, l.length)	== memcmp(l.text1, l.text2, l.length));

	printf("All memcmp tests passed.\n\n");

}

void test_ft_strnstr(void)
{
	typedef struct s_test
	{
		const char *haystack;
		const char *needle;
		unsigned int len;
	} t_test;

	printf("Testing strnstr...\n");

	t_test t1 = {
		"This is my first test",
		"is",
		100,
	};
	char *t1_answer = ft_strnstr(t1.haystack, t1.needle, t1.len);
	char *t1_og = strnstr(t1.haystack, t1.needle, t1.len);
	// printf("Test 1 my answer: \"%s\"\n", t1_answer);
	// printf("Test 1 OG answer: \"%s\"\n", t1_og);
	// printf("Diferença com OG: %d\n", ft_strncmp(t1_answer, t1_og, t1.len));

	assert(ft_strncmp(t1_answer, t1_og, t1.len) == 0);
	assert(t1_answer == t1_og);

	// printf("\n###################################\n\n");

	t_test t2 = {
		"This is my second test",
		"es",
		100,
	};
	char *t2_answer = ft_strnstr(t2.haystack, t2.needle, t2.len);
	char *t2_og = strnstr(t2.haystack, t2.needle, t2.len);
	// printf("Test 2 my answer: \"%s\"\n", t2_answer);
	// printf("Test 2 OG answer: \"%s\"\n", t2_og);
	// printf("Diferença com OG: %d\n", ft_strncmp(t2_answer, t2_og, t2.len));

	assert(ft_strncmp(t2_answer, t2_og, t2.len) == 0);
	assert(t2_answer == t2_og);

	// printf("\n###################################\n\n");

	t_test t3 = {
		"This is my third test",
		"XXXX",
		100,
	};
	char *t3_answer = ft_strnstr(t3.haystack, t3.needle, t3.len);
	char *t3_og = strnstr(t3.haystack, t3.needle, t3.len);
	// printf("Test 3 my answer: \"%s\"\n", t3_answer);
	// printf("Test 3 OG answer: \"%s\"\n", t3_og);

	assert(t3_answer == t3_og);

	// printf("\n###################################\n\n");

	t_test t4 = {
		"This is my fourth test",
		"",
		100,
	};
	char *t4_answer = ft_strnstr(t4.haystack, t4.needle, t4.len);
	char *t4_og = strnstr(t4.haystack, t4.needle, t4.len);
	// printf("Test 4 my answer: \"%s\"\n", t4_answer);
	// printf("Test 4 OG answer: \"%s\"\n", t4_og);
	// printf("Diferença com OG: %d\n", ft_strncmp(t4_answer, t4_og, t4.len));

	assert(ft_strncmp(t4_answer, t4_og, t4.len) == 0);
	assert(t4_answer == t4_og);

	printf("All strnstr tests passed.\n\n");
}

void test_ft_atoi(void)
{
	char *a = "    24";
	char *b = "35";
	char *c = "abc47def";
	char *d = "578def";
	char *e = "-73";
	char *f = "+10";
	char *g = "-9000";
	char *h = " 	 	+-+-+876";
	char *i = " 	 \f\n----+-+87abc";
	char *j = " 	 \f----+-+11+7abc";
	char *k = "-0";
	char *l = "+0";
	char *m = "2147483647";
	char *n = "-2147483648";
	char *o = "2147483648";
	char *p = "-2147483649";
	char *q = "999999999999999";
	char *r = "-999999999999999";
	char *s = "999999999999998";
	char *t = "-999999999999998";

	printf("Testing atoi...\n");

	assert(ft_atoi(a) == atoi(a));
	assert(ft_atoi(b) == atoi(b));
	assert(ft_atoi(c) == atoi(c));
	assert(ft_atoi(d) == atoi(d));
	assert(ft_atoi(e) == atoi(e));
	assert(ft_atoi(f) == atoi(f));
	assert(ft_atoi(g) == atoi(g));
	assert(ft_atoi(h) == atoi(h));
	assert(ft_atoi(i) == atoi(i));
	assert(ft_atoi(j) == atoi(j));
	assert(ft_atoi(k) == atoi(k));
	assert(ft_atoi(l) == atoi(l));
	assert(ft_atoi(m) == atoi(m));
	assert(ft_atoi(n) == atoi(n));
	assert(ft_atoi(o) == atoi(o));
	assert(ft_atoi(p) == atoi(p));
	assert(ft_atoi(q) == atoi(q));
	assert(ft_atoi(r) == atoi(r));
	assert(ft_atoi(s) == atoi(s));
	assert(ft_atoi(t) == atoi(t));

	printf("All atoi tests passed.\n\n");
}

void test_ft_strdup(void)
{
	const char *a = "This is my first test";
	const char *b = "";
	const char c[999999];
	const char *d = NULL;

	char *my_result_a = ft_strdup(a);
	char *default_a = strdup(a);
	char *my_result_b = ft_strdup(b);
	char *default_b = strdup(b);
	char *my_result_c = ft_strdup(c);
	char *my_result_d = ft_strdup(d);

	printf("Testing strdup...\n");

	assert(strncmp(my_result_a , default_a, 100) == 0);
	assert(my_result_b[0] == '\0');
	assert(my_result_b[0] == default_b[0]);
	assert(my_result_c == NULL);
	assert(my_result_d == NULL);

	free(my_result_a);
	free(my_result_b);
	free(my_result_c);
	free(my_result_d);
	free(default_a);
	free(default_b);

	printf("All strdup tests passed.\n\n");
}

int main(void)
{
	printf("Initiating tests for Part 1...\n");
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
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strnstr(); // Wrong results still
	test_ft_atoi();
	test_ft_strdup();

	printf("-------------------\n");
	printf("All Part 1 tests passed.\n");
	return 0;
}
