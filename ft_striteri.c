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

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, (s + i));
		++i;
	}
}
/*
void	ft_adding(unsigned int i, char *str)
{
	*str += i;
}

int	main(void)
{
	char	str[] = "Yellow";
	ft_striteri(str, ft_adding);
	printf("%s\n", str);
	return (0);
}
*/
