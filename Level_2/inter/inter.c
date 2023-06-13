/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:10:04 by damachad          #+#    #+#             */
/*   Updated: 2023/06/13 14:44:07 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	map1(char c)
{
	static int	map[128];
	int			pos;

	pos = c;
	map[pos]++;
	return (map[pos]);
}

int	map2(char c)
{
	static int	map[128];
	int			pos;

	pos = c;
	map[pos]++;
	return (map[pos]);
}

void	inter(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
		map2(s2[i++]);
	i = 0;
	while (s1[i])
	{
		if (map1(s1[i]) == 1 && map2(s1[i]) >= 2)
			write(1, &s1[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
