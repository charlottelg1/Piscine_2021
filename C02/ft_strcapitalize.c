/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:38:28 by cle-gran          #+#    #+#             */
/*   Updated: 2021/02/09 12:17:14 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	|| (c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int first;
	int i;

	first = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (first == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		first = alphanumeric(str[i]);
		i++;
	}
	return (str);
}
