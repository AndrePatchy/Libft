/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:49:51 by patchy            #+#    #+#             */
/*   Updated: 2023/09/21 16:11:12 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*src_cpy;

	src_cpy = (char *)src;
	i = 0;
	while (i < size && *dst)
	{
		dst++;
		i++;
	}
	if (i == size)
		return (i + ft_strlen(src));
	j = 0;
	while (src_cpy[j] != '\0')
	{
		if (j < size - i - 1)
			*dst++ = src_cpy[j];
		j++;
	}
	*dst = '\0';
	return (i + j);
}
/*
int	main()
{
	char	dest[7] = "";
	char	src[] = "";

	printf("%li\n",ft_strlcat(dest, src, 10));
	printf("%s\n", dest);
	return (0);
}
*/
