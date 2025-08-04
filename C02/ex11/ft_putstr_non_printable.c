/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:33:46 by oanekrif          #+#    #+#             */
/*   Updated: 2025/08/04 00:50:46 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	if (dest && src)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[17];

	if (str)
	{
		i = 0;
		ft_strcpy(hex, "0123456789abcdef");
		while (str[i])
		{
			if (!(str[i] >= 32 && str[i] <= 126))
			{
				ft_putchar('\\');
				ft_putchar(hex[str[i] / 16]);
				ft_putchar(hex[str[i] % 16]);
			}
			else
				ft_putchar(str[i]);
			i++;
		}
	}
}

/*
void	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
}
*/
