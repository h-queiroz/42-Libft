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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	size_t			alloc_len;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	alloc_len = ft_strlen(s + start);
	if (len < alloc_len)
		alloc_len = len;
	result = malloc(sizeof(char) * (alloc_len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, (s + start), alloc_len + 1);
	return (result);
}
