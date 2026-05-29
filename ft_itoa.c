/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:38:51 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/29 19:29:02 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static unsigned int	numlen(long n)
{
	unsigned int	counter;

	if (n == 0)
		return (0);
	counter = 0;
	if (n < 0)
	{
		n *= -1;
		counter++;
	}
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

static long	transform_places(unsigned int n)
{
	long	result;

	result = 1;
	while (n > 1)
	{
		result *= 10;
		n--;
	}
	return (result);
}

char *ft_itoa(int n)
{
	char			*result;
	unsigned int	places;
	unsigned int	len;
	unsigned int	i;
	long			num;
	
	num = n;
	places = numlen(num);
	printf("");
	result = malloc(sizeof(char) * (places + 1));
	if (!result)
		return (NULL);
	i = 0;
	if (num < 0)
	{
		result[i++] = '-';
		num *= -1;
	}
	len = transform_places(places);
	while (len > 0)
	{
		result[i] = (num / len) + '0';
		num %= len;
		len /= 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
int main(void)
{
	printf("\"%s\"\n", ft_itoa(0));
	printf("\"%s\"\n", ft_itoa(9));
	printf("\"%s\"\n", ft_itoa(-9));
	printf("\"%s\"\n", ft_itoa(123));
	printf("%s\n", ft_itoa(1000));
	printf("%s\n", ft_itoa(54321));
	printf("%s\n", ft_itoa(-7));
	printf("%s\n", ft_itoa(-873));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));

	return (0);
}
*/
