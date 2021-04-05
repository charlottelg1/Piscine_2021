/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:46:47 by cle-gran          #+#    #+#             */
/*   Updated: 2021/02/16 10:05:33 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] <= 32 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_index_base(char *base, char c)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		++i;
	return (i);
}

int		ft_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
	|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int neg;
	int nb;
	int index;

	i = 0;
	neg = 1;
	nb = 0;
	if (check_base(base) == 0)
		return (0);
	while (ft_whitespace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			neg *= (-1);
	while (str[i] != '\0')
	{
		index = ft_index_base(base, str[i++]);
		if (index == -1)
			break ;
		nb = (nb * ft_strlen(base)) + index;
	}
	return (nb * neg);
}
