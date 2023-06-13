/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:47:44 by damachad          #+#    #+#             */
/*   Updated: 2023/06/13 15:06:42 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

void	last_word(char *str)
{
	int	i;
	int	wdbeg;

	i = 0;
	wdbeg = 0;
	while (str[i])
	{
		while (is_space(str[i]) == 1)
			i++;
		if (str[i] != '\0')
			wdbeg = i;
		while (is_space(str[i]) == 0 && str[i] != '\0')
			i++;
		if (str[i] == '\0')
		{
			while (str[wdbeg] != '\0' && is_space(str[wdbeg]) == 0)
			{	
				write(1, &str[wdbeg], 1);
				wdbeg++;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
}
