/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreichel <mreichel@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:04:39 by mreichel          #+#    #+#             */
/*   Updated: 2026/11/20 10:46:41 by mreichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

/*
int	main(void)
{
	#include <stdio.h>
	#include <limits.h>

	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(1764));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-3));
	printf("%d\n", ft_sqrt(INT_MAX));
	return (0);
}
*/

int	ft_sqrt(int nb)
{
	unsigned int	x;
	unsigned int	n;

	x = 0;
	n = (unsigned int) nb;
	if (nb < 0)
		return (0);
	while (x * x < n)
	{
		if (x * x == n)
			return (x);
		x++;
	}
	if (x * x > n)
		return (0);
	else
		return (x);
}
