/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:03:56 by patchy            #+#    #+#             */
/*   Updated: 2023/09/28 16:15:04 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	r;
	int	sig;

	sig = 1;
	i = 0;
	r = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sig = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		r = r * 10 + nptr[i] - 48;
		i++;
	}
	return (r * sig);
}
/*
int	main()
{
	char	str[] = "OLHA CARALHO";
	printf("%i\n", ft_atoi(str));
	printf("%i", atoi(str));
	return (0);
}
*/
