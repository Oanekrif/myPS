/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_printable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:10:27 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/29 17:19:05 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <strio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			if (!(str[i] >= 32 && str[i] <= 126))
				return (0);
			i++;
		}
		return (1);
	}
}

/*
void main(void)
{
	char str1[] = "Hello there";
	char str2[] = "Hello there\n";
	printf("%d\n%d\n", ft_is_printable(str1), ft_is_printable(str2));
}
*/
