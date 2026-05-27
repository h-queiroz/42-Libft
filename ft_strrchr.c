/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:12:27 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/18 16:20:55 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*starting_point;

	starting_point = s;
	while (*s)
		s++;
	while (s != starting_point)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
	}
	if (*starting_point == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
