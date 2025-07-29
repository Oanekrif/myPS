/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:38:43 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/28 18:40:40 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

/*
void	main(void)
{
	ft_putstr("omar anekrif");
}
*/
