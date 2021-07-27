/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 14:48:00 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/25 20:18:34 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (dest < src)
		{
			((char *)dest)[i] = ((char *)src)[i];
		}
		else
		{
			((char *)dest)[n - i] = ((char *)src)[n - i];
		}
		i++;
	}	
	return (dest);
}
