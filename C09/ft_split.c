/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:54:28 by cle-gran          #+#    #+#             */
/*   Updated: 2021/02/21 15:53:35 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		++i;
	}
	return (0);
}

int		count_word(char *str, char *charset)
{
	int i;
	int count;
	int state;

	i = 0;
	count = 0;
	state = 1;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset) == 0 && state == 1)
		{
			count++;
			state = 0;
		}
		if (is_charset(str[i], charset) == 1 && state == 0)
			state = 1;
		i++;
	}
	return (count);
}

int		len_wo(char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i] != '\0' && is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	j = count_word(str, charset);
	if (!(tab = (char **)malloc(sizeof(char *) * (j + 1))))
		return (NULL);
	while (i < j)
	{
		while (*str && is_charset(*str, charset) == 1)
			str++;
		if (!(tab[i] = (char *)malloc(sizeof(char) * len_wo(str, charset) + 1)))
			return (NULL);
		k = 0;
		while (*str && is_charset(*str, charset) == 0)
			tab[i][k++] = *str++;
		tab[i][k] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
