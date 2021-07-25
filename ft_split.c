/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:16:48 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/24 22:02:44 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t ft_count_delimiters(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	num_delimiters;
	char	**splited;

	num_delimiters = ft_count_delimiters(s, c);
	splited = (char **) malloc((num_delimiters + 1) * sizeof(char *))

	///todo
}

static size_t ft_count_delimiters(char const *s, char c)
{
	size_t i;
	size_t num_delimiters;

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