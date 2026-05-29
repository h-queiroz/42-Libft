/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 20:51:14 by hector            #+#    #+#             */
/*   Updated: 2026/05/25 09:36:17 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len_dst;
	unsigned int	len_src;
	unsigned int	iterator;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (size + len_src);
	while (*dst)
		dst++;
	iterator = 0;
	while (*src && (len_dst + iterator) < (size - 1))
	{
		*(dst + iterator) = *src;
		src++;
		iterator++;
	}
	*(dst + iterator) = '\0';
	return (len_dst + len_src);
}
