/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:18:30 by damachad          #+#    #+#             */
/*   Updated: 2023/06/14 13:06:41 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (is_space(str[i]) == 1)
			i++;
		if (str[i] != '\0')
			count++;
		while (is_space(str[i]) == 0 && str[i] != '\0')
			i++;
	}
	return (count);
}

char	*ft_strdup_2(char *str, int beg, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end - beg + 2));
	if (!word)
		return (NULL);
	while (beg < end)
		word[i++] = str[beg++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		beg;
	char	**words;

	i = 0;
	j = 0;
	beg = 0;
	words = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	if (!words)
		return (NULL);
	while (str[i] != '\0')
	{
		while (is_space(str[i]) == 1)
			i++;
		if (str[i] == '\0')
			break ;
		beg = i;
		while (is_space(str[i]) == 0 && str[i] != '\0')
			i++;
		words[j++] = ft_strdup_2(str, beg, i);
	}
	words[j] = NULL;
	return (words);
}
/*
int	main(void)
{
	int	i;

	i = 0;
	printf("nb of words: %d\n", count_words("may the odds be ever in your favour"));
	while (i <= count_words("may the odds be ever in your favour"))
	{
		printf("%s\n", ft_split("may the odds be ever in your favour")[i]);
		i++;
	}
}
*/