/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:16:48 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/27 23:50:37 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static size_t	ft_count_slices(char const *s, char c);
static char		*ft_get_str(char const *s, char c, size_t start);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	num_slices;
	char	**splited;

	i = 0;
	j = 0;
	num_slices = ft_count_slices(s, c);
	splited = (char **) malloc((num_slices + 1) * sizeof(char *));
	printf("%lu  ", num_slices);
	if (splited)
	{
		while (s[i] != '\0')
		{
			if ((i == 0 && s[i] != c) || (s[i - 1] == c && s[i] != c))
			{
				splited[j] = ft_get_str(s, c, i);
				j++;
			}
			i++;
		}
		splited[j] = NULL;
	}
	return (splited);
}

static size_t	ft_count_slices(char const *s, char c)
{
	size_t	i;
	size_t	num_slices;

	i = 0;
	num_slices = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			num_slices++;
		i++;
	}
	return (num_slices);
}

static char	*ft_get_str(char const *s, char c, size_t start)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[start + i] != c && s[start + i] != '\0')
	{
		i++;
	}
	str = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	if (str)
	{
		while (s[start + i] != c && s[start + i] != '\0')
		{
			str[i] = s[start + i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
