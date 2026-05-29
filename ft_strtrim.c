/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 08:04:00 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/26 08:04:25 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <unistd.h>

static char	*ret_empty(void)
{
	char	*result;

	result = malloc(sizeof(char));
	if (!result)
		return (NULL);
	*result = '\0';
	return (result);
}

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*end;
	char		*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (*s1 == '\0')
		return (ret_empty());
	if (*set == '\0')
		return (ft_strdup(s1));

	while (*s1 && is_in_set(*s1, set))
		s1++;

	if (*s1 == '\0')
		return (ret_empty());

	end = s1;
	while (*end)
		end++;
	end--;

	while (is_in_set(*end, set) && end > s1)
		end--;

	result = malloc(sizeof(char) * (2 + end - s1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, (end - s1) + 2);

	return (result);
}
