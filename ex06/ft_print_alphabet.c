/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreichel <mreichel@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:10:24 by mreichel          #+#    #+#             */
/*   Updated: 2026/11/18 13:33:04 by mreichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
void	ft_putchar(char c)
{
	#include <unistd.h>
	write(1, &c, 1);
	return ;
}
*/

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
