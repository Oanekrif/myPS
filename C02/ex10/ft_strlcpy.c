/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:30:13 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/29 19:37:57 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (dest && src)
	{
		if (size > 0)
		{
			while (src[i] && i < size - 1)
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
		while (src[i])
			i++;
	}
	return (i);
}

/*
void	main(void)
{
	char src[] = "Hello omar!";
	char dest[9];

	printf("%d\n%s\n", ft_strlcpy(&dest, &arc, sizeof(dest)), dest);
}
*/
