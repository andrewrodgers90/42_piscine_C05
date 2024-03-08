/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:35:04 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/27 19:05:26 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while ((i <= nb / 2) && (i < 46341))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	clock_t	t;
	t = clock();
	int a = ft_sqrt(2147395600);
	int b = ft_sqrt(2146468900);
	int c = ft_sqrt(2146932224);
	int d = ft_sqrt(-9);
	int e = ft_sqrt(1);
	int f = ft_sqrt(0);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("\nTime taken: %f", time_taken);
	return (0);
}*/
