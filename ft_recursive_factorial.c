/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:47:06 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/26 12:24:36 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 1)
		return (1);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
int	main(void)
{
	int i = ft_recursive_factorial(4);
	int j = ft_recursive_factorial(6);
	int k = ft_recursive_factorial(1);
	int l = ft_recursive_factorial(0);
	int m = ft_recursive_factorial(-1);
	printf("%d\n%d\n%d\n%d\n%d\n", i, j, k, l, m);
	return (0);
}*/
