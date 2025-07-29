/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanekrif <oanekrif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:06:57 by oanekrif          #+#    #+#             */
/*   Updated: 2025/07/28 18:17:07 by oanekrif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (div && mod)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
void	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 17;
	b = 7;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d\n%d %% %d = %d\n", a, b, div, a, b, mod);
}
*/
