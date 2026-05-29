/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 20:25:02 by hector            #+#    #+#             */
/*   Updated: 2026/05/20 22:22:39 by hector           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	i;
	unsigned int	length;
	char			*result;

	length = ft_strlen(s);
	if (length == 0)
	{
		result = malloc(sizeof(char));
		if (!result)
			return (NULL);
		*result = '\0';
		return (result);
	}
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
