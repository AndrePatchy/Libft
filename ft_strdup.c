/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 09:34:48 by patchy            #+#    #+#             */
/*   Updated: 2023/10/06 12:32:31 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_copy;
	size_t	i;

	s_copy = (char *)malloc(ft_strlen(s) + 1);
	if (!s_copy)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s_copy[i] = s[i];
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}
/*
int	main()
{
	char	*s1 = "mslkdfewjur9032u49032849302849023840932092fncewmcimew";
	char	*s_copy = ft_strdup(s1);

	printf("Result of ft_strdup: %s\n", s_copy);
	free(s_copy);
	printf("Result of strdup: %s\n", strdup(s1));
	return (0);
}
*/
