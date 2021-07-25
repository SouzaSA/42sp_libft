/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 14:11:46 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/24 14:51:02 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	int		i;
	int		s_len;
	char	*dest;

	i = 0;
	s_len = ft_strlen(s);
	dest = malloc(s_len * sizeof(char) + 1);
	while (i <= s_len)
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
