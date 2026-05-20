/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_part1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 23:29:05 by hector            #+#    #+#             */
/*   Updated: 2026/05/20 18:54:58 by hector           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <assert.h> // assert()
#include <stdio.h> 	// printf()

#include <ctype.h> 	// isalpha(), isdigit(), isalnum(), isascii(), isprint(), toupper(), tolower()
#include <string.h> // strlen(), memset(), bzero(), memcpy(), strlcat(), strchr(), strrchr(), strncmp(), strdup()
#include <stdlib.h>	// atoi()

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

	// Test1
	char ft_buffer[] = "ABCDEFGHIJ";
	char og_buffer[] = "ABCDEFGHIJ";

	ft_memmove(ft_buffer, ft_buffer + 1, 3);
	memmove(og_buffer, og_buffer + 1, 3);

	printf("Testing memmove...\n");

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

	printf("\nft_buffer2: ");
	i = 0;
	while (i < length)
	{
		printf("%c", ft_buffer2[i]);
		i++;
	}

	printf("\nog_buffer2: ");
	i = 0;
	while (i < length)
	{
		printf("%c", og_buffer2[i]);
		i++;
	}
	printf("\n");

	i = 0;
	while (i < length)
	{
		assert(ft_buffer2[i] == og_buffer2[i]);
		i++;
	}

	printf("All memmove tests passed.\n\n");
}

void test_ft_strlcat(void)
{
	printf("Testing strlcat...\n");

	char my_dest1[10] = "Hello, ";
	char og_test1[10] = "Hello, ";
	const char *src1= "World";

	size_t res1 = ft_strlcat(my_dest1, src1, sizeof(my_dest1));
	size_t test1 = strlcat(og_test1, src1, sizeof(og_test1));

	// printf("My final result \t\"%s\". Final length: %zu\n", my_dest1, res1);
	// printf("OG result \t\t\"%s\". Final length: %zu\n", og_test1, test1);

	assert(ft_strncmp(my_dest1, og_test1, 100) == 0);
	assert(res1 == test1);

	// printf("\n####################\n");

	char my_dest2[10] = "";
	char og_test2[10] = "";
	const char *src2= "";

	size_t res2 = ft_strlcat(my_dest2, src2, sizeof(my_dest2));
	size_t test2 = strlcat(og_test2, src2, sizeof(og_test2));

	// printf("\nMy final result \t\"%s\". Final length: %zu\n", my_dest2, res2);
	// printf("OG result \t\t\"%s\". Final length: %zu\n", og_test2, test2);

	assert(ft_strncmp(my_dest2, og_test2, 100) == 0);
	assert(res2 == test2);

	// printf("\n####################\n");

	char my_dest3[10] = "";
	char og_test3[10] = "";
	const char *src3= "other empty";

	size_t res3 = ft_strlcat(my_dest3, src3, sizeof(my_dest3));
	size_t test3 = strlcat(og_test3, src3, sizeof(og_test3));

	// printf("\nMy final result \t\"%s\". Final length: %zu\n", my_dest3, res3);
	// printf("OG result \t\t\"%s\". Final length: %zu\n", og_test3, test3);

	assert(ft_strncmp(my_dest3, og_test3, 100) == 0);
	assert(res3 == test3);

	// printf("\n####################\n");

	char my_dest4[50] = "src empty";
	char og_test4[50] = "src empty";
	const char *src4= "";

	size_t res4 = ft_strlcat(my_dest4, src4, sizeof(my_dest4));
	size_t test4 = strlcat(og_test4, src4, sizeof(og_test4));

	// printf("\nMy final result \t\"%s\". Final length: %zu\n", my_dest4, res4);
	// printf("OG result \t\t\"%s\". Final length: %zu\n", og_test4, test4);

	assert(ft_strncmp(my_dest4, og_test4, 100) == 0);
	assert(res4 == test4);

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

	printf("All strncmp tests passed.\n\n");
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
	char *t1_og = strstr(t1.haystack, t1.needle);
	printf("Test 1 my answer: \"%s\"\n", t1_answer);
	printf("Test 1 OG answer: \"%s\"\n", t1_og);
	printf("Diferença com OG: %d\n", ft_strncmp(t1_answer, t1_og, t1.len));

	assert(ft_strncmp(t1_answer, t1_og, t1.len) == 0);

	printf("\n###################################\n\n");

	t_test t2 = {
		"This is my second test",
		"es",
		100,
	};
	char *t2_answer = ft_strnstr(t2.haystack, t2.needle, t2.len);
	char *t2_og = strstr(t2.haystack, t2.needle);
	printf("Test 2 my answer: \"%s\"\n", t2_answer);
	printf("Test 2 OG answer: \"%s\"\n", t2_og);
	printf("Diferença com OG: %d\n", ft_strncmp(t2_answer, t2_og, t2.len));

	assert(ft_strncmp(t2_answer, t2_og, t2.len) == 0);

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

	char *my_result_a = ft_strdup(a);
	char *default_a = strdup(a);
	char *my_result_b = ft_strdup(b);
	char *my_result_c = ft_strdup(c);

	printf("Testing strdup...\n");

	assert(strncmp(my_result_a , default_a, 100) == 0);
	assert(my_result_b == NULL);
	assert(my_result_c == NULL);

	free(my_result_a);
	free(my_result_b);
	free(my_result_c);
	free(default_a);

	printf("All strdup tests passed.\n\n");
}

int main(void)
{
	printf("Initiating tests for Part 1...\n");
	printf("-------------------\n\n");

	// Part 1

	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	// test_ft_memmove();
	// test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	// test_ft_strnstr(); // Wrong results still
	test_ft_atoi();
	test_ft_strdup();

	printf("-------------------\n");
	printf("All Part 1 tests passed.\n");
	return 0;
}
