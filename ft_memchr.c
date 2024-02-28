/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:09:02 by patchy            #+#    #+#             */
/*   Updated: 2023/09/28 11:15:38 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	c = (unsigned char)c;
	while (n && *p != c)
	{
		++p;
		--n;
	}
	if (n)
		return ((void *)p);
	else
		return (NULL);
}
/*
int	main()
{
	char	s1[] = "Heillo";
	char	s2[] = "Heillo";

	printf("Result of ft_memchr: %p \n", ft_memchr(s1, 'i', 10));
	printf("Result of memchr: %p \n", memchr(s2, 'i', 10));
	return (0);
}
*/
