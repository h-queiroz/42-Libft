/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 09:39:39 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/18 10:50:12 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			temp[n];
	char			*my_dest;
	const char		*my_src;
	unsigned int	i;
	int				og_n;

	my_dest = dest;
	my_src = src;
	og_n = n;
	i = 0;
	while (i < n)
	{
		temp[i] = my_src[i];
		i++;
	}
	n = og_n;
	i = 0;
	while (i < n)
	{
		*my_dest = temp[i];
		my_dest++;
		i++;
	}
	return (dest);
}
