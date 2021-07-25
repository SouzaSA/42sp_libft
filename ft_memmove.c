/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 14:48:00 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/25 17:26:11 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		if (dest < src)
		{
			d[i] = s[i];
		}
		else
		{
			d[n - i] = s[n - i];
		}
		i++;
	}	
	return (dest);
}
