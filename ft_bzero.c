/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 22:47:09 by hector            #+#    #+#             */
/*   Updated: 2026/05/17 22:47:11 by hector           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*x;

	x = s;
	i = 0;
	while (i < n)
		x[i++] = '\0';
}

// Simple and dumb alternative
/*
void	bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
*/
