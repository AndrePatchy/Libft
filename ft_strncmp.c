/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:24:56 by patchy            #+#    #+#             */
/*   Updated: 2023/09/23 17:02:25 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char		*p1;
	unsigned char		*p2;
	size_t				i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (p1[i] == p2[i] && i < n)
	{
		if (p1[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	else
		return ((int)(p1[i] - p2[i]));
}
/*
int	main()
{
	char	s1[] = "AAZ";
	char	s2[] = "AAA";
	size_t	n = 3;

	printf("%i\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/
