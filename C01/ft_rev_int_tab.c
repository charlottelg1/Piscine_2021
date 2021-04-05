/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 08:56:28 by cle-gran          #+#    #+#             */
/*   Updated: 2021/02/08 09:25:46 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int k;
	int temptab[size];

	i = 0;
	j = size - 1;
	k = 0;
	while (k <= size - 1)
	{
		temptab[k] = tab[k];
		k++;
	}
	while (i <= size - 1)
	{
		tab[i] = temptab[j];
		i++;
		j--;
	}
}
