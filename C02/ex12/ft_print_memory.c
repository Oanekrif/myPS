/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:03:58 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/29 22:40:08 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
#define HEX "0123456789abcdef"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (dest && src)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

void	print_address(unsigned long long ptr)
{
	int		i;
	char	temp[16];

	i = 15;
	while (i >= 0)
	{
		temp[i] = HEX[ptr % 16];
		ptr /= 16;
		i--;
	}
	write(1, temp, 16);
}

void	print_line(unsigned char *ptr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			ft_putchar(HEX[ptr[i] / 16]);
			ft_putchar(HEX[ptr[i] % 16]);
		}
		else
			write(1, "  ", 2);
		if (i % 2)
			ft_putchar(' ');
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (ptr[i] >= 32 && ptr[i] <= 126)
			ft_putchar(ptr[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*ptr;

	ptr = (char *)addr;
	i = 0;
	if (size == 0)
		return (addr);
	while (i < size)
	{
		print_address((unsigned long long)(ptr + i));
		write(1, ": ", 2);
		if (size - i >= 16)
			print_line((unsigned char *)(ptr + i), 16);
		else
			print_line((unsigned char *)(ptr + i), size - i);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}

/*
void	main(void)
{
	char	str[92];

	ft_strcpy(str, "Bonjour les aminches\t\n\tc\a est fou\ttout\t"
		"ce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ");
	ft_print_memory(str, sizeof(str));
}
*/
