/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 19:46:36 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/23 20:04:00 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*v1;
	unsigned char	*v2;
	size_t			i;
	int				diff;

	v1 = (unsigned char *) s1;
	v2 = (unsigned char *) s2;
	i = 0;
	diff = 0;
	if (n > 0)
	{
		while (v1[i] != '\0' && v2[i] != '\0' && v1[i] == v2[i] && i < n - 1)
		{
			i++;
		}
		diff = (int)(v1[i] - v2[i]);
	}
	return (diff);
}
