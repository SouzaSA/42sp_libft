/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 14:53:33 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/30 20:21:35 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min2(size_t a, size_t b);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub;

	i = 0;
	s_len = ft_strlen(s);
	if (start < s_len)
	{
		sub = (char *)malloc((ft_min2(s_len - start, len) + 1) * sizeof(char));
	}
	else
	{
		sub = (char *)malloc(sizeof(char));
	}
	if (sub)
	{
		while (i + start < s_len && i < len && s[start + i] != '\0')
		{
			sub[i] = s[start + i];
			i++;
		}
		sub[i] = '\0';
	}
	return (sub);
}

static size_t	ft_min2(size_t a, size_t b)
{
	size_t	min;

	min = a;
	if (a > b)
		min = b;
	return (min);
}
