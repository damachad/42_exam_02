/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:03:41 by damachad          #+#    #+#             */
/*   Updated: 2023/06/13 11:03:45 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	do_op(char *n1, char *op, char *n2)
{
	if (op[0] == '+')
		printf("%d\n", atoi(n1) + atoi(n2));
	else if (op[0] == '-')
		printf("%d\n", atoi(n1) - atoi(n2));
	else if (op[0] == '*')
		printf("%d\n", atoi(n1) * atoi(n2));
	else if (op[0] == '/')
		printf("%d\n", atoi(n1) / atoi(n2));
	else if (op[0] == '%')
		printf("%d\n", atoi(n1) % atoi(n2));
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	else
		write(1, "\n", 1);
	return (0);
}
