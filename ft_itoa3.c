/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 08:07:40 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/29 16:29:50 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static char	get_left_num(int *number, unsigned int *places)
{
	int	n;
	int	local_places;
	int temp;

	n = *number;
	local_places = *places;
	temp = 1;

	if (n < 0)
	{
		*number = (n * -1);
		// n *= -1;
		return ('-');
	}

	while (n > 10)
	{
		n /= 10;
		temp *= 10;
	}

	*number %= temp;
	(*places)--;
	return (n + '0');
}

static unsigned int	get_num_len(int n)
{
	long int		nb;
	unsigned int 	counter;

	nb = n;
	if (nb < 0)
		nb *= -1;
	if (nb == 0)
		return (1);
	counter = 0;
	while (nb > 0)
	{
		counter++;
		nb /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char			*final;
	char			actual_num[2];
	unsigned int	length;
	unsigned int	places;

	if (n == -2147483648)
	{
		ft_strlcat(final, "-2147483648", (length + 1));
		return (final);
	}
	length = get_num_len(n);
	places = length;

	printf("Comprimento: %d\n", length);

	final = malloc(sizeof(char) * (length + 1));
	if (!final)
		return (NULL);

	actual_num[1] = '\0';
	if (n < 0)
	{
		actual_num[0] = '-';
		ft_strlcat(final, actual_num, (length + 1));
		printf("Final atualmente \"%s\"\n", final);
	}
	// return (final);
	if (n == 0)
		final[0] = '0';
	while (n > 0)
	{
		actual_num[0] = get_left_num(&n, &places);
		ft_strlcat(final, actual_num, (length + 1));
	}

	final[length] = '\0';
	return (final);
}
int main(void)
{
	printf("Result: %s\n", ft_itoa(321));
	printf("Result: %s\n", ft_itoa(0));
	// printf("Result: %s\n", ft_itoa(10000));
	printf("Result: %s\n", ft_itoa(-9));
	// printf("Result: %s\n", ft_itoa(00005));
	// printf("Result: %s\n", ft_itoa(000065));
	printf("Result: %s\n", ft_itoa(2147483647));
	printf("Result: %s\n", ft_itoa(-2147483648));
	printf("Result: %s\n", ft_itoa(-10000));
	printf("Result: %s\n", ft_itoa(-9));
	printf("Result: %s\n", ft_itoa(-1));

	return (0);
}

