/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:04:52 by damachad          #+#    #+#             */
/*   Updated: 2023/06/15 14:38:21 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	print_wd(char *str, int beg, int end)
{
	while (beg <= end)
		write(1, &str[beg++], 1);
}

void	rev_wstr(char *str)
{
	int	j;
	int	end;

	j = ft_strlen(str) - 1;
	while (j >= 0)
	{
		end = j;
		while (is_space(str[j]) == 0 && j >= 0)
			j--;
		print_wd(str, j + 1, end);
		if (j >= 0)
			write(1, " ", 1);
		if (j >= 0)
		j--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
