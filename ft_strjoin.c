/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 09:31:00 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/25 07:48:48 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*result;
	unsigned int	total_len;
	unsigned int	s1_len;
	unsigned int	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = (s1_len + s2_len);
	result = malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, (s1_len + 1));
	ft_strlcat(result, s2, (total_len + 1));
	return (result);
}

/*
#include <stdio.h>
#include <assert.h>
#include <string.h>

int main(void)
{
	char *s1 = "lorem ipsum";
	char *s2 = "dolor sit amet";

	printf("Meu resultado: \"%s\"\n", ft_strjoin(s1, s2));
	printf("Resultado OG: \"%d\"\n", strjoin(s1, s2));

	assert(ft_strncmp(ft_strjoin(s1, s2), strjoin(s1, s2), 100) == 0);

	return (0);
}
*/
