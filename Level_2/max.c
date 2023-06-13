/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:02:11 by damachad          #+#    #+#             */
/*   Updated: 2023/06/13 12:02:13 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	max;
	int	i;

	i = 0;
	if (len == 0)
		return (0);
	max = tab[i];
	while (tab[i])
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
/*
int	main(void)
{
	int		tab[10] = {2, -5, 7, 20, 88, 4, 0, 1, 64, 32};
	unsigned int	len;

	len = 10;
	printf("%d\n", max(tab, len));
	return (0);
}
*/
