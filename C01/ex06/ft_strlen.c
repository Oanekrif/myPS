/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:27:27 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/28 18:41:25 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	if (str)
	{
		i = 1;
		while (str[i])
		{
			i++;
		}
	}
	return (i);
}

/*
void	main(void)
{
	printf("%d", ft_strlen("omar anekrif"));
}
*/
