/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 19:24:31 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/27 19:59:34 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Size = 0

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	size_t			counter;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	counter = dst_len;
	if (size <= dst_len)
		return (size + src_len);
	while (*src && counter < (size - 1))
	{
		*(dst + dst_len) = *src;
		dst++;
		src++;
		counter++;
	}
	*(dst + dst_len) = '\0';
	return (dst_len + src_len);
}
