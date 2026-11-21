/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreichel <mreichel@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 09:35:36 by mreichel          #+#    #+#             */
/*   Updated: 2026/11/22 00:47:50 by mreichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strdup(char *src);

/*
int	main()
{
	#include <stdio.h>
	printf("%s\n", ft_strdup("duplicate"));
	printf("%s\n", ft_strdup(""));
	printf("%s\n", ft_strdup("   "));
	return (0);
}
*/

char	*ft_strdup(char *src)
{
	char *duplicate;

	duplicate = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (duplicate == NULL)
		return (NULL);
	ft_strcpy(duplicate, src);	
	return (duplicate);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
