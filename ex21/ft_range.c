/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreichel <mreichel@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 00:52:58 by mreichel          #+#    #+#             */
/*   Updated: 2026/11/22 10:32:35 by mreichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);
void	print(int *arr, int max);
int	*populate_array(int *arr, int nb, int size);

int	main()
{
	print(ft_range(1, 5), 5);
	print(ft_range(-27, -20), -20);
	print(ft_range(4, 2), 2);
	print(ft_range(-2, 3), 3);
	print(ft_range(-10, -13), -13);
	print(ft_range(7, 7), 7);
	return (0);
}

void	print(int *arr, int max)
{
	#include <stdio.h>
	int	i = 0;
	while (arr != NULL)
	{
		printf("%d, ", arr[i]);
		i++;
		if (i == max)
			break;
	}
	printf("\n");
}

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;

	if (max <= min)
		return (NULL);
	size = max - min;
	arr = malloc(sizeof(int) * size);
	populate_array(arr, max, size);
	return (arr);
}

int	*populate_array(int *arr, int nb, int size)
{
	while (size > 0)
	{
		nb--;
		size--;
		arr[size] = nb;
	}
	return (arr);
}
