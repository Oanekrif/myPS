/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:32:05 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/31 19:55:32 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (*str != '\0')
	{
		ft_putchar(*str);
		ft_putstr(str + 1);
	}
}

/*
void	main(void)
{
	char str[] = "Hello there my name is omar!";
	ft_putstr(str);
}
*/
