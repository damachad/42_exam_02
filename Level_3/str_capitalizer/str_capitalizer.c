/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:26:09 by damachad          #+#    #+#             */
/*   Updated: 2023/06/15 12:43:58 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (is_space(str[i]) == 1)
			write(1, &str[i++], 1);
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			write(1, &str[i++], 1);
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
			write(1, &str[i++], 1);
		while (is_space(str[i]) == 0 && str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		str_capitalizer(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	if (argc == 1)
		write(1, "\n", 1);
	return (0);
}
