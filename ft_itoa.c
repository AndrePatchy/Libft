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

static int	ft_length(int n)
{
	int	len;

	len = 0;
	if (n<= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_fillingz(int len, int offset, int n, char *result)
{
	while (len > offset)
	{
		result[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		offset;
	int		len;
	char	*result;

	offset = 0;
	len = ft_length(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n == -2147483648)
	{
		result[0] = '-';
		result[1] = '2';
		n = 147483648;
		offset = 2;	
	}
	if (n < 0)
	{
		result[0] = '-';
		offset = 1;
		n = -n;
	}
	ft_fillingz(len, offset, n, result);
	result[len] = '\0';
	return (result);
}
/*
int	main(void)
{
	int	test_cases[] = {0, 123, -456, 2147483647, -2147483648};
	int	num;
	char	*str;
	unsigned long	i;

	i = 0;
	while (i < sizeof(test_cases) / sizeof(test_cases[0]))
	{
		num = test_cases[i];
		str = ft_itoa(num);
		printf("Integer: %d, String: %s\n", num, str);
		i++;
		free(str);
	}
	return (0);
}*/
