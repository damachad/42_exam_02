/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:52:41 by damachad          #+#    #+#             */
/*   Updated: 2023/06/06 15:52:42 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_bytes(char c, const char *reject)
{
	int	i;

	i = 0;
	while (reject[i] != '\0')
	{
		if (reject[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && check_bytes(s[i], reject) == 0)
		i++;
	return (i);
}
