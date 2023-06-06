/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:50:06 by damachad          #+#    #+#             */
/*   Updated: 2023/06/05 10:56:18 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
		i++;
	while (i > 0)
	{
		write(1, &argv[1][i - 1], 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
