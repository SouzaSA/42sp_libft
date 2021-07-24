/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 14:48:00 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/23 15:57:32 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	tmp[n];

	i = 0;
	while (i < n)
	{
		tmp[i] = ((char *) src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *) dest)[i] = tmp[i];
		i++;
	}
	return (dest);
}
