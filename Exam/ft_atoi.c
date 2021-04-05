/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:27:11 by cle-gran          #+#    #+#             */
/*   Updated: 2021/02/18 16:36:04 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int nb;
	int i;
	int neg;

	neg = 1;
	i = 0;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i]== '\f' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	return (nb *neg);
}

int		main()
{
	printf("%d", ft_atoi("   	-123vf42cjvnd"));
	return (0);
}
