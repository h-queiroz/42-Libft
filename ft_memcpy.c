/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 06:56:13 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/25 07:49:20 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*my_dest;
	const char		*my_src;
	unsigned int	i;

	i = 0;
	my_dest = dest;
	my_src = src;
	while (i < n)
	{
		my_dest[i] = my_src[i];
		i++;
	}
	return (dest);
}
