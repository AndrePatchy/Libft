/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:29:27 by patchy            #+#    #+#             */
/*   Updated: 2023/09/28 09:35:15 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	size_t	i;
	char	*r;

	c = (unsigned char) c;
	p = (char *)s;
	i = 0;
	r = NULL;
	while (p[i])
	{
		if (p[i] == c)
			r = &p[i];
		i++;
	}
	if (c == 0)
		return (&p[i]);
	return (r);
}
/*
int	main()
{
	char	ft_str[] = "Primeiro U, segundo U fewfew";
	char	str[] = "Primeiro M, segundo M";
	char	u = 'o';
	char	m = 'o';

	printf("2nd: %s\n", ft_strrchr(ft_str, u));
	printf("%s\n", strrchr(str, m));
	return (0);
}
*/
