/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patchy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:09 by patchy            #+#    #+#             */
/*   Updated: 2023/09/29 09:26:22 by patchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_count(const char *s, char c)
{
	size_t	count;
	int	in_word;

	count = 0;
	in_word = 0;

	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static void	ft_allocationz(char **arr1, const char *s, char c)
{
	char		**arr2;
	const char	*temp;

	temp = s;
	arr2 = arr1;
	while (*temp)
	{
		while (*s == c)
			++s;
		temp = s;
		while (*temp && *temp != c)
			++temp;
		if (*temp == c || temp > s)
		{
			*arr2 = ft_substr(s, 0, temp - s);
			s = temp;
			++arr2;
		}
	}
	*arr2 = NULL;
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	char	**result;

	if (!s)
		return (NULL);
	words = ft_count(s, c);
	result =  (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	ft_allocationz(result, s, c);
	return (result);
}
/*
int	main(void)
{
	char	*s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char	c = ' ';
	char	**splited_str = ft_split(s, c);
	size_t	i;
	i = 0;

	while (splited_str[i] != NULL)
	{
		printf("%s\n", splited_str[i]);
		i++;
	}
	free(splited_str);
	return (0);
}
*/
