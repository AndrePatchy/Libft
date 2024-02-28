/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:48:26 by patchy            #+#    #+#             */
/*   Updated: 2023/09/20 16:19:40 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
/*
int	main()
{
	char	string_src[] = "Hello World!";
	char	string_dest[] = "World...Hello!";
	char	string_src_mem[] = "Yes, baby!";
	char	string_dest_mem[] = "Baby, yes!";

	printf("string_src: %s\n", string_src);
	printf("string_dest: %s\n", string_dest);
	ft_memcpy(string_dest, string_src, 12);
	printf("After ft_memcpy\n");
	printf("string_src: %s\n", string_src);
	printf("string_dest: %s\n\n", string_dest);

	printf("Now, the C standard function!\n\n");

	printf("string_src_mem: %s\n", string_src_mem);
	printf("string_dest_mem: %s\n", string_dest_mem);
	memcpy(string_dest_mem, string_src_mem, 3);
	printf("After memcpy\n");
	printf("string_src_mem: %s\n", string_src_mem);
	printf("string_dest_mem: %s\n", string_dest_mem);
	return (0);
}
*/
