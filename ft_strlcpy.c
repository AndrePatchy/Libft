/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:46:24 by patchy            #+#    #+#             */
/*   Updated: 2023/09/21 16:12:04 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This ft is used to copy a string from src to dest, ensuring that it doesn't
//overflow the dest buffer. It returns the lenght of the src string! 

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main()
{
	char	src[] = "Ola!";
	char	dest[] = "Adeus";

	printf("%li\n", ft_strlcpy(dest, src, 10));
	return (0);
}
*/
