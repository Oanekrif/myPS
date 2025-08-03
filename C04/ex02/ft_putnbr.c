/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:50:21 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/31 20:14:56 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

/*
int	main(void)
{
	ft_putnbr(0);             // 0
	write(1, "\n", 1);
	ft_putnbr(123);           // 123
	write(1, "\n", 1);
	ft_putnbr(-456);          // -456
	write(1, "\n", 1);
	ft_putnbr(-2147483648);   // -2147483648
	write(1, "\n", 1);
	ft_putnbr(2147483647);    // 2147483647
	return (0);
}
*/
