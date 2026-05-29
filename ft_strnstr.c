/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:21:24 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/25 14:28:33 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	length;

	if (!(*little))
		return ((char *)big);
	length = ft_strlen(little);
	while (*big && len >= length)
	{
		if (ft_strncmp(big, little, length) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
