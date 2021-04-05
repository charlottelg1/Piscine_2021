/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:36:29 by cle-gran          #+#    #+#             */
/*   Updated: 2021/02/18 16:58:22 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int diff;
	int *tab;
	int i;

	i = 0;
	diff = end -start;
	if (diff < 0)
		diff *= -1;
	if (!(tab = (int *)malloc(sizeof(int) * diff + 1)))
		return (0);
	if (end > start)
	{
		while (end >= start)
		{
			tab[i] = end;
			end --;
			i++;
		}
		return (tab);
	}
	else if (end < start)
	{
		while (end <= start)
		{
			tab[i] = end;
			end++;
			i++;
		}
		return (tab);
	}
	else
	{
		tab[i] = end;
		return (tab);
	}
}

int		main(void)
{
	int i = 0;
	int *tab = ft_range(1, 3);

	while (i < 3)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
