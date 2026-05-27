/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 06:02:31 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/26 07:51:44 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*result;
	size_t			alloc_len;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] && i < start)
		i++;
	if (s[i] == '\0')
	{
		result = malloc(sizeof(char));
		if (!result)
			return (NULL);
		*result = '\0';
		return (result);
	}
	if (len < ft_strlen(s + start))
		alloc_len = len;
	else
		alloc_len = ft_strlen(s + start);
	result = malloc(sizeof(char) * alloc_len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, (s + start), alloc_len + 1);
	return (result);
}
