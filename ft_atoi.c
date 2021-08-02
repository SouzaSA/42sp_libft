/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 11:38:46 by sde-alva          #+#    #+#             */
/*   Updated: 2021/08/02 15:55:26 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		i;
	int		signal;
	long	result;
	long	prev;

	i = 0;
	signal = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13 && nptr[i] != '\0'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signal = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i] != '\0')
	{
		prev = result;
		result = result * 10 + (nptr[i] - '0');
		if (prev > result)
		{
			if (signal = 1)
				result = 0;
			if (signal = -1)
				result = -1;
			break ;
		}
		i++;
	}
	return (signal * result);
}
