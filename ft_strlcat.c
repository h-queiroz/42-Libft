/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 20:51:14 by hector            #+#    #+#             */
/*   Updated: 2026/05/19 21:16:31 by hector           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && (i + j) < dsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (src[j] == '\0' && (i + j) < dsize)
		dst[(i + j)] = '\0';
	else if ((i + j) > 0)
		dst[(i + j - 1)] = '\0';
	while (src[j])
		j++;
	return (i + j);
}
