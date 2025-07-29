/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:13:56 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/28 18:18:20 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (a && b)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}

/*
void	main(void)
{
	int	a;
	int	b;

	a = 17;
	b = 7;
	ft_ultimate_div_mod(&a, &b);
	printf("the div: %d\nthe mod: %d\n", a, b);
}
*/
