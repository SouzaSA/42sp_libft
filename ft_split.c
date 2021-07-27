/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:16:48 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/25 20:03:44 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_delimiters(char const *s, char c);
static char		*ft_get_str(char const *s, char c, size_t start);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	num_delimiters;
	char	**splited;

	i = 0;
	j = 0;
	num_delimiters = ft_count_delimiters(s, c);
	splited = (char **) malloc((num_delimiters + 1) * sizeof(char *));
	while (i <= num_delimiters)
	{
		if (i == 0 || s[i] == c)
			splited[i] = ft_get_str(s, c, i);
		i++;
	}
	return (splited);
}

static size_t	ft_count_delimiters(char const *s, char c)
{
	size_t	i;
	size_t	num_delimiters;

	i = 0;
	num_delimiters = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			num_delimiters++;
		i++;
	}
	return (num_delimiters);
}

static char	*ft_get_str(char const *s, char c, size_t start)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = start;
	len = 0;
	if (start != 0)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	while (i < len)
	{
		if (s[i] != c)
			str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
