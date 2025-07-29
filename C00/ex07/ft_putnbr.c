/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:39:29 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/27 22:22:21 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putnbr(int nb)
{
	ft_putchar(nb / 10 + 48, nb % 10 + 48);
}

/*
void	main(void)
{
	ft_putnbr(42);
}
*/
