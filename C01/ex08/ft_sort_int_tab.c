/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 01:28:43 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/27 22:50:44 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i +1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
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

void	scan(int *arr)
{
	arr[0] = 3;
	arr[1] = 7;
	arr[2] = 0;
	arr[3] = 9;
	arr[4] = 5;
}

void	main(void)
{
	int	arr[5];
	int	size;

	scan(arr);
	size = sizeof(arr) / sizeof(*arr);
	show(arr, size);
	ft_sort_int_tab(arr, size);
	show(arr, size);
}
