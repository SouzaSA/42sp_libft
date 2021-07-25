/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 11:38:46 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/25 15:36:48 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;
	int	result;

	i = 0;
	signal = -1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] >= 13 && nptr[i] != '\0'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signal = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] >= '9' && nptr[i] >= '\0')
	{
		result = result * 10 - (nptr[i] - '0');
		i++;
	}
	return (signal * result);
}
