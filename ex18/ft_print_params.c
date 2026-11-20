/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreichel <mreichel@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 12:17:15 by mreichel          #+#    #+#             */
/*   Updated: 2026/11/20 12:36:17 by mreichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_params(char *param);
void	ft_putchar(char c);

void	ft_print_params(char *param)
{
	int	i;

	i = 0;
	while (param[i])
	{
		ft_putchar(param[i]);
		i++;
	}
	ft_putchar('\n');
}

/*
void	ft_putchar(char c)
{
	#include <unistd.h>
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	while (n < argc)
	{
		ft_print_params(argv[n]);
		n++;
	}
	return (0);
}*/
