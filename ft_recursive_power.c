/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:16:09 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/27 13:58:30 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power < 0)
		return (0);
	if (power < 1)
		return (1);
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
/*
int	main(void)
{
	int i = ft_recursive_power(4, 2);
	int m = ft_recursive_power(4, -2);
	int j = ft_recursive_power(0, 2);
	int k = ft_recursive_power(4, 0);
	int l = ft_recursive_power(-2, 3);
	int n = ft_recursive_power(0, 0);

	printf("%d\n", i);
	printf("%d\n", m);
	printf("%d\n", j);
	printf("%d\n", k);
	printf("%d\n", l);
	printf("%d\n", n);
	return (0);
}*/
