/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:15:05 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/27 21:39:05 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar(a + 48);
				ft_putchar(b + 48);
				ft_putchar(c + 48);
				if (a < 7)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
void	main(void)
{
	ft_print_comb();
}
*/
