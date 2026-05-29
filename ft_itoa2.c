/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 08:07:40 by hequeiro          #+#    #+#             */
/*   Updated: 2026/05/27 20:00:31 by hequeiro         ###   ########.fr       */
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
	unsigned int counter;

	if (n == 0)
		return (1);
	counter = 0;
	while (n > 0)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char			*final;
	char			actual_num[2];
	unsigned int	length;
	unsigned int	places;

	length = get_num_len(n);
	places = length;

	final = malloc(sizeof(char) * (length + 1));
	if (!final)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strlcat(final, "-2147483648", (length + 1));
		return (final);
	}

	// printf("N atualmente: %d\n", n);
	// printf("Places atualmente: %d\n", places);
	// printf("Leftmost number: %c\n", get_left_num(&n, &places));
	// printf("Places depois: %d\n", places);
	// printf("N depois: %d\n", n);

	actual_num[1] = '\0';
	if (n < 0)
	{
		return ("-12342131");
		// final[0] = '-';
		actual_num[0] = '-';
		ft_strlcat(final, actual_num, (length + 1));
		actual_num[0] = '2';
		ft_strlcat(final, actual_num, (length + 1));
		printf("Entrou no menos\n");
	}
	if (n == 0)
		final[0] = '0';
	while (n > 0)
	{
		// printf("N atualmente: %d\n", n);
		// printf("Places atualmente: %d\n", places);
		actual_num[0] = get_left_num(&n, &places);
		printf("Actual_num atualmente: %c\n", actual_num[0]);
		// printf("Places depois: %d\n", places);
		// printf("N depois: %d\n", n);
		// printf("Checando %c\n", actual_num[0]);
		// printf("\n\n");
		ft_strlcat(final, actual_num, (length + 1));
	}

	final[length] = '\0';
	return (final);
	// printf("Comprimento de %d: %d\n", n, length);
}
/*

int main(void)
{
	printf("Result: %s\n", ft_itoa(321));
	printf("Result: %s\n", ft_itoa(0));
	printf("Result: %s\n", ft_itoa(10000));
	printf("Result: %s\n", ft_itoa(9));
	printf("Result: %s\n", ft_itoa(00005));
	printf("Result: %s\n", ft_itoa(000065));
	printf("Result: %s\n", ft_itoa(2147483647));
	printf("Result: %s\n", ft_itoa(-2147483648));
	// printf("Result: %s\n", ft_itoa(-10000));
	printf("Result: %s\n", ft_itoa(-9));
	// printf("Result: %s\n", ft_itoa(-1));

	return (0);
}

void	my_abs(int *sign, int *reserva)
{
	if (*reserva < 0)
	{
		*sign = 1;
		if (*reserva == -2147483648)
			*reserva = 2147483647;
		else
			*reserva *= -1;
	}
}

void	get_length(int *casas, int *reserva)
{
	while (*reserva > 9)
	{
		*reserva /= 10;
		*casas *= 10;
	}
}

void	ft_putnbr(int nb)
{
	char	num;
	int		casas;
	int		reserva;
	int		sign;

	casas = 1;
	reserva = nb;
	sign = 0;
	my_abs(&sign, &reserva);
	get_length(&casas, &reserva);
	if (sign)
		write(1, "-", 1);
	while (casas > 0)
	{
		if (sign)
			num = ((nb / casas) * -1) + '0';
		else
			num = (nb / casas) + '0';
		nb %= casas;
		casas /= 10;
		write(1, &num, 1);
	}
}
*/
