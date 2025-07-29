/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:00:25 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/28 20:15:40 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
			i++;
		}
		return (1);
	}
}

/*
void	main(void)
{
	char str1[] = "Omar";
	char str2[] = "omar";

	printf("%d\n%d\n", ft_str_is_lowercase(str1), ft_str_is_lowercase(str2));
}
*/
