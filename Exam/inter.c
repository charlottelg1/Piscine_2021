/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:17:41 by cle-gran          #+#    #+#             */
/*   Updated: 2021/02/18 16:26:25 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_str(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_inter(char *s1, char *s2)
{
	int i;
	int j;
	char tab[127] = {0};

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (check_str(s1[i], tab) == 1 && check_str(s1[i], s2) == 0)
		{
			ft_putchar(s1[i]);
			tab[j] = s1[i];
			j++;
		}
		i++;
	}
}

int	main(int ac, char **ag)
{
	if (ac == 3)
		ft_inter(ag[1], ag[2]);
	ft_putchar('\n');
	return (0);
}
