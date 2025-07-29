/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:14:54 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/29 19:29:40 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
						|| (str[i - 1] >= 'a' && str[i] <= 'z')
						|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
					str[i] = str[i] - 32;
			}
			i++;
		}
		return (str);
	}
}

/*
void	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n",ft_strcapitalize(str));
}
*/
