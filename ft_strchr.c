/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 18:01:59 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/23 18:12:11 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*match;
	int		i;

	i = 0;
	match = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
		{
			match = s + i;
			break ;
		}
		i++;
	}
	if (c == '\0')
		match = s + i;
	return (match);
}
