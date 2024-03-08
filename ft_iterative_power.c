/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:02:35 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/27 13:52:03 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	int i = ft_iterative_power(0, 0);
	int j = ft_iterative_power(2, 0);
	int k = ft_iterative_power(0, 2);
	int l = ft_iterative_power(7, -2);
	int m = ft_iterative_power(-2, 7);

	printf("%d\t%d\t%d\t%d\t%d", i, j, k, l, m);
	return (0);
}*/
