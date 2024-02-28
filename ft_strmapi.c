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

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	i = 0;
	if(!s)
		return (ft_strdup(""));
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if(!str)
		return (NULL);
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		++i;
	}
	str[i] = 0;
	return (str);
}
/*
char	ft_anything(unsigned int i, char s)
{
	return (s + i);
}

int	main(void)
{
	char	*str;

	str = "tenho sooooono";
	printf("%s\n", ft_strmapi(str, ft_anything));
	return (0);
}*/
