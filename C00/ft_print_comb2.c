/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:07:41 by cle-gran          #+#    #+#             */
/*   Updated: 2021/02/07 09:28:57 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comb2_print(int a, int b)
{
	char a1;
	char a2;
	char b1;
	char b2;

	a1 = a / 10 + '0';
	a2 = a % 10 + '0';
	b1 = b / 10 + '0';
	b2 = b % 10 + '0';
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			comb2_print(a, b);
			b++;
		}
		a++;
	}
}
