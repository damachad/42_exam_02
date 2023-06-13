/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:34:42 by damachad          #+#    #+#             */
/*   Updated: 2023/06/13 15:47:43 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	scan(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (scan(s1[i], s2) == 1)
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("ft_strpbrk: %s\n", ft_strpbrk(argv[1], argv[2]));
		printf("strpbrk: %s\n", strpbrk(argv[1], argv[2]));
	}
	else
		printf("\n");
}
*/