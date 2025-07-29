/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:20:48 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/29 17:25:06 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ift_strlowcase(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			i++;
		}
		return (str);
	}
}

/*
void	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	printf("%s\n%s\n", ft_strlowcase(str1), ft_strlowcase(str2));
}
*/
