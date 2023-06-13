/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:13:11 by damachad          #+#    #+#             */
/*   Updated: 2023/06/13 14:38:15 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	while (n > 1)
	{
		if (n % 2 != 0)
			return (0);
		n /= 2;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (atoi(argv[1]) >= 0)
			printf("%d\n", is_power_of_2(atoi(argv[1])));
		else
			printf("Please insert a positive number\n");
	}
	else
		printf("Please insert a positive number\n");
	return (0);
}
*/
