/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 19:10:52 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/25 18:38:42 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*match;

	i = 0;
	match = 0;
	if (c < 0)
		c += 256;
	while (i < n - 1)
	{
		if ((int)((unsigned char *)s)[i] == c)
		{
			match = (void *)(((unsigned char *)s) + i);
			break ;
		}
		i++;
	}
	return (match);
}
