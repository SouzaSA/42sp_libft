/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:09:56 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/27 23:21:53 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char const c, char const *set);
static int	ft_get_first_valid(char const *s1, char const *set);
static int	ft_get_last_valid(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*trimmed;

	i = 0;
	start = ft_get_first_valid(s1, set);
	end = ft_get_last_valid(s1, set);
	trimmed = NULL;
	if (start < end)
		trimmed = malloc(end - start + 2);
	else
		trimmed = malloc(1);
	if (trimmed)
	{
		while (start + i <= end)
		{
			trimmed[i] = s1[start + i];
			i++;
		}
		trimmed[i] = '\0';
	}
	return (trimmed);
}

static int	ft_is_in_set(char const c, char const *set)
{
	int	i;
	int	in_set;

	i = 0;
	in_set = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			in_set = 1;
		i++;
	}
	return (in_set);
}

static int	ft_get_first_valid(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (ft_is_in_set(s1[i], set) && s1[i] != '\0')
		i++;
	return (i);
}

static int	ft_get_last_valid(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (ft_is_in_set(s1[i], set) && i >= 0)
		i--;
	return (i);
}
