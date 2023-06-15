/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:57:52 by damachad          #+#    #+#             */
/*   Updated: 2023/06/15 12:10:56 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

void	epur_str(char *str)
{
	int	i;
	int	beg;

	i = 0;
	beg = 0;
	while (str[i] != '\0')
	{
		while (is_space(str[i]) == 1)
			i++;
		if (str[i] != '\0' && beg > 0)
			write(1, " ", 1);
		while (is_space(str[i]) == 0 && str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
		beg++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
