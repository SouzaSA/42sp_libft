/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 20:05:56 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/25 17:19:09 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	char	*match;

	i = 0;
	little_len = ft_strlen(little);
	match = 0;
	if (little[0] == '\0')
		match = big;
	if (little_len > 0)
	{
		while (big[i] != '\0')
		{
			if (little[0] == big[i])
			{
				if (ft_strncmp(big + i, little, little_len) == 0)
				{
					match = big + i;
					break ;
				}
			}
			i++;
		}
	}
	return (match);
}
