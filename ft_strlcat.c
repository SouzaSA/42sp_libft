/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:11:58 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/23 17:15:54 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	total_size;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_size = src_len + size;
	if (size > dest_len)
	{
		while (src[i] != '\0' && dest_len + i < size - 1)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
		total_size = dest_len + src_len;
	}
	return (total_size);
}
