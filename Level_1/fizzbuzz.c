/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:53:23 by damachad          #+#    #+#             */
/*   Updated: 2023/06/05 14:53:25 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	multiple(int n)
{
	int	res;

	res = 0;
	if (n % 3 == 0)
		res += 1;
	if (n % 5 == 0)
		res += 2;
	return (res);
}

void	writedig(int n)
{
	char	c;

	c = n + 48;
	write(1, &c, 1);
}

void	putnbr_2(int n)
{
	char	arr[3];

	arr[1] = n % 10;
	n /= 10;
	arr[0] = n;
	writedig(arr[0]);
	writedig(arr[1]);
}

int	main(void)
{
	int	n;
	char	c;

	c = '1';
	n = 1;
	while (n <= 100)
	{
		if (multiple(n) == 1)
			write(1, "fizz", 4);
		else if (multiple(n) == 2)
			write(1, "buzz", 4);
		else if (multiple(n) == 3)
			write(1, "fizzbuzz", 8);
		else if (n < 10)
			writedig(n);
		else
			putnbr_2(n);
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
