/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 09:31:00 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/21 11:51:08 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*result;
	unsigned int	total_len;
	unsigned int	s1_len;
	unsigned int	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = (s1_len + s2_len);
	result = malloc((sizeof(char) * total_len) + 1);
	ft_memcpy(result, s1, s1_len);
	ft_strlcat(result, s2, (total_len+1));
	return (result);
}
