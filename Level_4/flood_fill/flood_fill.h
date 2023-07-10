/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:42:23 by damachad          #+#    #+#             */
/*   Updated: 2023/07/10 14:04:31 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

typedef struct  s_point
{
	int		x;
	int		y;
}			t_point;

void	flood_fill(char **tab, t_point size, t_point begin);
void	f_fill(char **tab, t_point size, char target, int row, int col);

#endif