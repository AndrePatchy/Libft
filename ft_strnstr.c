/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:17:34 by patchy            #+#    #+#             */
/*   Updated: 2023/09/28 18:42:44 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *str, const char *str_to_find, size_t len)
{
	size_t	i;
	size_t	k;
	char	*s1;
	char	*s_find;

	s1 = (char *)str;
	s_find = (char *)str_to_find;
	i = 0;
	if (*s_find == '\0')
		return (s1);
	while (i < len && s1[i] != '\0')
	{
		k = 0;
		while (s1[i + k] != '\0' && s_find[k] != '\0'
			&& s1[i + k] == s_find[k] && (i + k) < len)
		{
			if (s_find[k + 1] == '\0')
				return (&s1[i]);
			k++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char	str[] = "Foo Bar Baz";
	char	str_to_find[] = "Foo";

	printf("Result ft_strnstr: %s\n", ft_strnstr(str, str_to_find, 1));
	printf("Result of strnstr: %s\n", strnstr(str, str_to_find, 1));
	return (0);
}
*/
