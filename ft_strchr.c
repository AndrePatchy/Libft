/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:14:26 by patchy            #+#    #+#             */
/*   Updated: 2023/09/23 16:13:43 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	c = (unsigned char) c;
	p = (char *)s;
	i = 0;
	while (p[i])
	{
		if (p[i] == c)
			return (&p[i]);
		i++;
	}
	if (c == 0)
		return (&p[i]);
	return (NULL);
}
/*
int	main()
{
	char	str[] = "teste";
	int	c = '\0';

	printf("ft_strchr:\n");
	printf("%p\n\n", ft_strchr(str, c));

	printf("strchr:\n");
	printf("%p\n", strchr(str, c));
	return (0);
}
*/
