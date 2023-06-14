/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:35:15 by damachad          #+#    #+#             */
/*   Updated: 2023/06/14 11:58:48 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	z;
	int	n;

	z = 128;
	n = octet;
	while (z > 0)
	{
		if (z & n)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		z >>= 1;
	}
}
/*
int	main(void)
{
	print_bits(4);
	write(1, "\n", 1);
	return (0);
}
*/