/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 08:06:11 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/26 08:07:18 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static void	clean_words(char **words, int length)
{
	while (length > 0)
	{
		printf("Limpando \"%s\"\n", words[length-1]);
		free(words[length-1]);
		length--;
	}
	(void)words;
	printf("LIMPEI TUDO!!!\n");
}

static unsigned int	count_words(const char *s, char c)
{
	unsigned int	counter;
	unsigned int	in_word;

	counter = 0;
	in_word = 0;
	if (*s != '\0' && *s != c)
	{
		in_word = 1;
		counter = 1;
	}
	while (*s)
	{
		// Se char atual NÃO for delimitador e estiver em "palavra"
		// não faça nada, apenas prossiga
		if (*s != c && in_word == 1)
		{
		}
		// Se char atual for delimitador e estiver em "palavra"
		// troque in_word para FALSE
		else if (*s == c && in_word == 1)
		{
			in_word = 0;
		}
		// Se char atual for delimitador e NÃO estiver em "palavra"
		// não faça nada, apenas prossiga
		else if (*s == c && in_word == 0)
		{
		}
		// Se char atual NÃOfor delimitador e NÃO estiver em "palavra"
		// não faça nada, apenas prossiga
		else if (*s != c && in_word == 0)
		{
			counter++;
			in_word = 1;
		}
		s++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char			**result;
	char			*current_word;
	unsigned int	length;
	unsigned int	i;
	unsigned int	j;
	unsigned int	word_start;
	unsigned int	in_word;

	// Percorrer STRING para saber quantidade de "palavras"
	// printf("Quantidade de \"palavras\": %d\n", count_words(s, c));

	// Alocar espaço no RESULT de tamanho (quantidade de "palavras" + 1 para NULLPTR)
	result = malloc(sizeof(char *) * count_words(s, c));
	if (!result)
		return (NULL);

	// Percorrer STRING para achar delimitadores, pegar range, criar ponteiro com X conteúdo + '\0' e colocar em RESULT
	i = 0;
	j = 0;
	word_start = 0;
	in_word = 0;
	length = 0;
	if (s[j] != '\0' && s[j] != c)
		in_word = 1;
	while (s[j])
	{
		if (s[j] == c && in_word == 1)
		{
			current_word = malloc(sizeof(char *) * length + 1);
			if (!current_word)
			{
				clean_words(result, i);
				return (NULL);
			}
			ft_strlcpy(current_word, &s[word_start], (length + 1));
			current_word[length] = '\0';
			result[i] = current_word;
			i++;
			in_word = 0;
			length = 0;
		}
		else if (s[j] != c && in_word == 1)
		{
			length++;
		}
		else if (s[j] != c && in_word == 0)
		{
			length++;
			in_word = 1;
			word_start = j;
		}
		j++;
	}
	if (in_word == 1)
	{
		clean_words(result, i);
		current_word = malloc(sizeof(char *) * length + 1);
		if (!current_word)
		{
			clean_words(result, i);
			return (NULL);
		}
		ft_strlcpy(current_word, &s[word_start], (length + 1));
		current_word[length] = '\0';
		result[i] = current_word;
		i++;
	}

	// Colocar NULLPTR
	result[i] = NULL;

	// char **test = malloc(sizeof(char) * 16);
	// ft_strlcpy(test[0], "This is my test", 100);
	return (result);
}

/*
static void	print_words(char **words)
{
	unsigned int	i;

	i = 0;
	while (words[i])
	{
		printf("Word Nº%d: \"%s\"\n", (i + 1), words[i]);
		i++;
	}
}

int main(void)
{
	char **words = ft_split("This is my test", ' ');
	// char **words = ft_split("This is my fucking        freaking test. . .     ", ' ');

	if (words[0] != NULL)
		print_words(words);

	// printf("Primeira palavra:\t\"%s\"\n", words[0]);
	// printf("Segunda palavra:\t\"%s\"\n", words[1]);
	// printf("Terceira palavra:\t\"%s\"\n", words[2]);
	// printf("Quarta palavra:\t\"%s\"\n", words[3]);
	// printf("Quinta palavra:\t\"%s\"\n", (words[4] == NULL) ? "(Null)" : words[4]);

	return (0);
}
*/
