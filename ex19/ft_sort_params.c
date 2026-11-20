/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreichel <mreichel@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 12:36:59 by mreichel          #+#    #+#             */
/*   Updated: 2026/11/20 16:37:20 by mreichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_sort_params(int argc, char **params);
int		ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
void ft_putchar(char c)
{
	#include <unistd.h>
	write(1, &c, 1);
}
*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	pointer_swap(char **p1, char **p2)
{
	char	*tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void	ft_sort_params(int argc, char **params)
{
	int	i;

	i = 1;
	while (argc > 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(params[i], params[i + 1]) > 0)
			{
				pointer_swap(&params[i], &params[i + 1]);
			}
			i++;
		}
		argc--;
		i = 1;
	}
	while (params[i])
	{
		ft_putstr(params[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	else
		ft_sort_params(argc, argv);
	return (0);
}
