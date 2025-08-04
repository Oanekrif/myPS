/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 21:24:19 by oanekrif          #+#    #+#             */
/*   Updated: 2025/08/04 01:03:55 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] == ' ' || (str[i] >= '\b' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}

void	print_nbr_base(int nbr, int base_value, char *base)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base_value)
		print_nbr_base(nb / base_value, base_value, base);
	ft_putchar(base[nb % base_value]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;
	int	i;
	int	j;

	base_value = 0;
	i = 0;
	while (base[base_value])
		base_value++;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if ((base[i] == base[j])
				|| (base[i] == '-' || base[i] == '+')
				|| (base[j] == '-' || base[j] == '+'))
				return ;
			j++;
		}
		i++;
	}
	if (base_value < 2)
		return ;
	print_nbr_base(nbr, base_value, base);
}

/*
int	main(int argc, char **argv)
{
	int		n;
	char	*base_symboles;

	if (argc != 3)
		return (1);
	n = ft_atoi(argv[1]);
	base_symboles = argv[2];
	ft_putnbr_base(n, base_symboles);
}
*/
