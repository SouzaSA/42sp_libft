/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 14:53:33 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/25 17:20:46 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub_str;

	i = 0;
	if (len > s_len - start)
	{
		sub_str = malloc((s_len - start + 1) * sizeof(char));
	}
	else
	{
		sub_str = malloc((len + 1) * sizeof(char));
	}
	if (sub_str)
	{
		while (s[start + i] != '\0' && i < len)
		{
			sub_str[i] = s[start + i];
			i++;
		}
		sub_str[i] = '\0';
	}
	return (sub_str);
}
