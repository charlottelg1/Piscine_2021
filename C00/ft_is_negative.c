/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:22:22 by cle-gran          #+#    #+#             */
/*   Updated: 2021/02/07 09:18:56 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char a;

	a = 'P';
	if (n < 0)
	{
		a = 'N';
		write(1, &a, 1);
	}
	else
	{
		write(1, &a, 1);
	}
}