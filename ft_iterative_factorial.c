/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:07:11 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/26 12:24:53 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb < 1)
		return (1);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	int i = ft_iterative_factorial(4);
	int j = ft_iterative_factorial(1);
	int k = ft_iterative_factorial(0);
	int l = ft_iterative_factorial(-1);
	printf("%d\n%d\n%d\n%d\n", i, j, k, l);
	return (0);
}*/
