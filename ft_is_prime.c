/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:53:22 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/26 12:22:39 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	clock_t	t;
	t = clock();
	int i = ft_is_prime(0);
	int j = ft_is_prime(1);
	int k = ft_is_prime(2);
	int l = ft_is_prime(4);
	int m = ft_is_prime(7);
	int n = ft_is_prime(54654246);

	printf("%d\n", i);
	printf("%d\n", j);
	printf("%d\n", k);
	printf("%d\n", l);
	printf("%d\n", m);
	printf("%d\n", n);
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("\nTime taken: %f", time_taken);
	return (0);
}*/
