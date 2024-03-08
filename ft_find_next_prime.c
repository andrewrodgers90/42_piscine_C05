/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:53:22 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/27 19:03:59 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0 || nb % 6 != 1 || nb % 6 != 5)
		nb += 1;
	while (!(ft_is_prime(nb)))
	{
		nb += 2;
	}
	return (nb);
}
/*
int	main(void)
{
	int i = ft_find_next_prime(0);
	int j = ft_find_next_prime(1);
	int k = ft_find_next_prime(2);
	int l = ft_find_next_prime(4);
	int m = ft_find_next_prime(7);
	int n = ft_find_next_prime(121);

	printf("%d\n", i);
	printf("%d\n", j);
	printf("%d\n", k);
	printf("%d\n", l);
	printf("%d\n", m);
	printf("%d\n", n);

	return (0);
}*/
