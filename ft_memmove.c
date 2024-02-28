/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:20:46 by patchy            #+#    #+#             */
/*   Updated: 2023/09/21 10:04:06 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The if(dest < src) return (ft_memcpy(dest, src, n), its to assure that if
// dest comes first than src in memory there is no overlaping of strings, 
//which means we can simply use ft_memcpy. 

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n--)
	{
		d[n] = s[n];
	}
	return (dest);
}
/*
int     main()
{
        char    string_src[] = "Hello World!";
        char    string_dest[] = "World...Hello!";
        char    string_src_mem[] = "Yes, baby!";
        char    string_dest_mem[] = "Baby, yes!";

        printf("string_src: %s\n", string_src);
        printf("string_dest: %s\n", string_dest);
        ft_memmove(string_dest, string_src, 12);
        printf("After ft_memmove\n");
        printf("string_src: %s\n", string_src);
        printf("string_dest: %s\n\n", string_dest);

        printf("Now, the C standard function!\n\n");

        printf("string_src_mem: %s\n", string_src_mem);
        printf("string_dest_mem: %s\n", string_dest_mem);
        memmove(string_dest_mem, string_src_mem, 3);
        printf("After memmove\n");
        printf("string_src_mem: %s\n", string_src_mem);
        printf("string_dest_mem: %s\n", string_dest_mem);
        return (0);
}
*/
