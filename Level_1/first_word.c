/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:00:10 by damachad          #+#    #+#             */
/*   Updated: 2023/06/05 13:00:13 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

void	put_word(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!str)
		return;
	while (is_space(str[i]) == 1 && str[i] != '\0')
		i++;
	j = i;
	while (is_space(str[j]) == 0 && str[j] != '\0')
		j++;
	while (i < j)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		put_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
