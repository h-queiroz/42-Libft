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

static char	**clean_words(char **words, int length)
{
	while (length > 0)
		free(words[--length]);
	free(words);
	return (NULL);
}

static unsigned int	count_words(const char *s, char c)
{
	size_t	counter;
	size_t	in_word;

	counter = 0;
	in_word = 0;
	if (*s != '\0' && *s != c)
	{
		in_word = 1;
		counter = 1;
	}
	while (*s)
	{
		if (*s == c && in_word == 1)
			in_word = 0;
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

	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
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
			current_word = malloc(sizeof(char) * (length + 1));
			if (!current_word)
				return (clean_words(result, i));
			ft_strlcpy(current_word, &s[word_start], (length + 1));
			current_word[length] = '\0';
			result[i] = current_word;
			i++;
			in_word = 0;
			length = 0;
		}
		else if (s[j] != c && in_word == 1)
			length++;
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
		current_word = malloc(sizeof(char) * (length + 1));
		if (!current_word)
			return (clean_words(result, i));
		ft_strlcpy(current_word, &s[word_start], (length + 1));
		current_word[length] = '\0';
		result[i] = current_word;
		i++;
	}
	result[i] = NULL;
	return (result);
}
