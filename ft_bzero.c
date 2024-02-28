/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:09 by patchy            #+#    #+#             */
/*   Updated: 2023/09/29 09:26:22 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int	main()
{
	char	str[] = "Damn, son!";
	char	str1[] = "Damn, son!";

	printf("Before the ft_bzero: %s\n", str);
	ft_bzero(str, 1);
	printf("After the ft_bzero: %s\n", str);
	
	bzero(str1, 1);
	printf("The bzero function: %s\n", str1);
	return (0);
}
*/
