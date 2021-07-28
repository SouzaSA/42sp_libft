/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 14:53:33 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/27 10:38:06 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min2(size_t a, size_t b);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub_str;

	i = 0;
	s_len = ft_strlen(s);
	if (start < s_len)
	{
		sub_str = malloc((ft_min2(s_len - start, len) + 1) * sizeof(char));
	}
	else
	{
		sub_str = malloc(1 * sizeof(char));
	}
	if (sub_str)
	{
		while (i + start < s_len && i < len && s[start + i] != '\0')
		{
			sub_str[i] = s[start + i];
			i++;
		}
		sub_str[i] = '\0';
	}
	return (sub_str);
}

static size_t	ft_min2(size_t a, size_t b)
{
	size_t	min;

	min = a;
	if (a > b)
		min = b;
	return (min);
}
