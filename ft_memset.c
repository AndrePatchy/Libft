/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:34:16 by patchy            #+#    #+#             */
/*   Updated: 2023/09/19 18:23:29 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
int	main()
{
	char	s[] = "Yo no soy marinero";

	printf("%p\n", ft_memset(s + 2, '.', 5));
	printf("%s\n", s);

	printf("%p\n", memset(s, '.', 3));
	printf("%s\n", s);
	return (0);
}
*/
