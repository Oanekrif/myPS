/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 22:58:33 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/29 23:06:01 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && (*s1 == *s2) && n--)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

/*
void	main(void)
{
	char str1[20] = "my name is omar.";
    char str2[20] = "my name is omar";
    int size = sizeof(str1);

    printf("%d\n%d\n",
			ft_strncmp(str1, str2, 10), ft_strncmp(str2, str1, size));
}
*/
