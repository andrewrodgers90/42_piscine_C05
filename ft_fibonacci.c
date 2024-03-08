/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:10:44 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/26 12:23:39 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	fib;

	fib = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index < 3)
		return (1);
	fib = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (fib);
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = ft_fibonacci(1);
	j = ft_fibonacci(4);
	k = ft_fibonacci(-2);
	l = ft_fibonacci(0);

	printf("%d\n%d\n%d\n%d\n", i, j, k, l);
	return (0);
}*/
