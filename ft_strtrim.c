/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 08:04:00 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/26 08:04:25 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <unistd.h>

static char	*ret_empty(void)
{
	char	*result;

	result = malloc(sizeof(char));
	if (!result)
		return (NULL);
	*result = '\0';
	return (result);
}

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
		{
			// printf("Achou %c\n", c);
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*end;
	char		*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (*s1 == '\0')
		return (ret_empty());
	if (*set == '\0')
		return (ft_strdup(s1));

	// printf("Não há problemas de Nulo ou Vazio.\n");

	// printf("Percorrendo início da string\n");
	while (*s1 && is_in_set(*s1, set))
		s1++;
	// printf("Início achou ponto de não set\n");
	if (*s1 == '\0')
		return (ret_empty());

	// printf("End indo até o final\n");
	end = s1;
	while (*end)
		end++;
	end--;
	// printf("End chegou ao final\n");
	// printf("End percorrendo do final até não encontrar mais itens que houverem em set\n");
	while (is_in_set(*end, set) && end > s1)
		end--;
	// printf("End achou item que não está no set ou chegou alcançou s1\n");

	// const char *it = s1;
	// while (it <= end)
	// {
	// 	write(1, it, 1);
	// 	it++;
	// }
	// printf("\n");

	result = malloc(sizeof(char) * (end - s1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, (end - s1) + 2);
	// printf("Length: %ld\n", (end - s1) + 2);
	// printf("Resultado final: %s\n", result);

	return (result);
}
