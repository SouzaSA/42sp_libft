/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 13:57:27 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/25 20:15:20 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	is_alnum;
	int	num;
	int	alpha;

	is_alnum = 0;
	num = c >= '0' && c <= '9';
	alpha = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	if (alpha || num)
		is_alnum = 1;
	return (is_alnum);
}
