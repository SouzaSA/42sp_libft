/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:09:56 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/24 17:29:57 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t			ft_strlen(const char *s);
static int		ft_is_in_set(char const set);
static size_t	ft_get_first_valid(char const *s1, char const *set);
static size_t	ft_get_last_valid(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*trimmed;

	i = 0;
	start = ft_get_first_valid(s1, set);
	end = ft_get_last_valid(s1, set);
	trimmed = malloc(end - start + 1);
	while (start + i <= end)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	return (trimmed);
}

static int	ft_is_in_set(char const c, char const set)
{
	size_t	i;
	int		in_set;

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

static size_t	ft_get_first_valid(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_is_in_set(s[i], set) && s[i] != '\0')
		i++;
	return (i);
}

static size_t	ft_get_last_valid(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (ft_is_in_set(s[i], set) && i >= 0)
		i--;
	return (i);
}
