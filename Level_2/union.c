/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:56:54 by damachad          #+#    #+#             */
/*   Updated: 2023/06/07 10:56:56 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checker(char c)
{
	static int	map[128];
	int			pos;

	pos = c - 48;
	map[pos] += 1;
	return (map[pos]);
}

void	ft_union(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (checker(str1[i]) == 1)
			write(1, &str1[i], 1);
		i++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		if (checker(str2[i]) == 1)
			write(1, &str2[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
