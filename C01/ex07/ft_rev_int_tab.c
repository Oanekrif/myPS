/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:55:07 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/27 22:46:27 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

void	show(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

void	scan(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		arr[i] = i + 1;
		i++;
	}
}

/*
void	main(void)
{
	int	arr[5];
	int	size;

	size = sizeof(arr) / sizeof(*arr);
	scan(arr, size);
	show(arr, size);
	ft_rev_int_tab(arr, size);
	show(arr, size);
}
*/
