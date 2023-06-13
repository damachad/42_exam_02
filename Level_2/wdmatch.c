/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:32:03 by damachad          #+#    #+#             */
/*   Updated: 2023/06/13 11:32:06 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *word, char *pool)
{
	int	i;
	int	j;
	int	test;

	i = 0;
	j = 0;
	test = 0;
	while (pool[i] != '\0' && word[j] != '\0')
	{
		if (pool[i] == word[j])
			j++;
		if (word[j] == '\0')
			test = 1;
		i++;
	}
	j = 0;
	while (word[j] && test == 1)
	{
		write(1, &word[j], 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
