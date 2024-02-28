/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:11:40 by patchy            #+#    #+#             */
/*   Updated: 2023/10/06 12:33:22 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	s;
	size_t	e;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	e = ft_strlen(s1) - 1;
	s = 0;
	while (s1[s] && ft_strchr(set, s1[s]))
		++s;
	while (s1[e] && ft_strchr(set, s1[e]))
		--e;
	str = ft_substr(s1, s, e - s + 1);
	return (str);
}
/*
int	main(void)
{
	char	str[] = "Da me \0 trim";
	char	set[] = "\0";

	printf("%s\n", ft_strtrim(str, set));
	return (0);
}*/
