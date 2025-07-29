/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:53:25 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/29 16:40:35 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <strdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
				return (0);
			i++;
		}
		return (1);
	}
}

/*
void	main(void)
{
	char str1[] = "123";
	char str2[] = "123a";

	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(str2));
}
*/
