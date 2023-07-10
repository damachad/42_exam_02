/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:47:09 by damachad          #+#    #+#             */
/*   Updated: 2023/07/10 14:07:25 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"
#include "flood_fill.h"

void	f_fill(char **tab, t_point size, char target, int row, int col)
{
	if (row < 0 || col < 0 || row >= size.y || col >= size.x)
		return;
	if (tab[row][col] == 'F' || tab[row][col] != target)
		return;
	tab[row][col] = 'F';
    f_fill(tab, size, target, row -1, col);
    f_fill(tab, size, target, row +1, col);
    f_fill(tab, size, target, row, col - 1);
    f_fill(tab, size, target, row, col + 1);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	target;
	
	target = tab[begin.y][begin.x];
	f_fill(tab, size, target, begin.y, begin.x);
	
}