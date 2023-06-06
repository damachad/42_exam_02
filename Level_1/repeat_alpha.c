/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:43:27 by damachad          #+#    #+#             */
/*   Updated: 2023/06/06 09:43:28 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	alpha_index;

	i = 0;
	while (str[i] != '\0')
	{
		alpha_index = 1;
		if (str[i] >= 65 && str[i] <= 90)
			alpha_index = str[i] - 'A' + 1;
		if (str[i] >= 97 && str[i] <= 122)
			alpha_index = str[i] - 'a' + 1;
		while (alpha_index > 0)
		{
			write(1, &str[i], 1);
			alpha_index--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
