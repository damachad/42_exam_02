/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:11:32 by damachad          #+#    #+#             */
/*   Updated: 2023/06/06 10:11:33 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_thirteen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 77) || (str[i] >= 97 && str[i] <= 109))
		{
			str[i] += 13;
			write(1, &str[i], 1);
			i++;
			continue ;
		}
		if ((str[i] >= 78 && str[i] <= 90) || (str[i] >= 110 && str[i] <= 122))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rot_thirteen(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
