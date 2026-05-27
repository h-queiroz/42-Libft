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
	char			*my_dest;
	const char		*my_src;
	unsigned int	i;

	my_dest = dest;
	my_src = src;
	i = 0;
	while (i < n)
	{
		if (my_src > my_dest)
		{
			my_dest[i] = my_src[i];
			i++;
		}
		else
		{
			n--;
			my_dest[n] = my_src[n];
		}
	}
	return (dest);
}
