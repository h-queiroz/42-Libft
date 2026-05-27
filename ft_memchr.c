/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:08:00 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/25 10:46:02 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*my_s;
	unsigned int		i;

	my_s = s;
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (my_s[i] == (unsigned char)c)
			return ((void *)(my_s + i));
		i++;
	}
	return (NULL);
}
