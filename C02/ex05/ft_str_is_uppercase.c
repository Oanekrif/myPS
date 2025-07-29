/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:05:24 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/28 20:13:42 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				return (0);
			i++;
		}
		return (1);
	}
}

/*
void	main(void)
{
	char str1[] = "OMAR";
	char str2[] = "oMAR";

	printf("%d\n%d\n", ft_str_is_uppercase(str1), ft_str_is_uppercase(str2));
}
*/
