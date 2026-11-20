/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreichel <mreichel@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 11:50:27 by mreichel          #+#    #+#             */
/*   Updated: 2026/11/20 12:16:40 by mreichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main()
{
	#include <stdio.h>
	printf("%d\n", ft_strcmp("empty s2", ""));
	printf("%d\n", ft_strcmp("","emptz s1"));
	printf("%d\n", ft_strcmp("different", "differences"));
	printf("%d\n", ft_strcmp("longer", "long"));
	printf("%d\n", ft_strcmp("long", "longer"));
}
*/
