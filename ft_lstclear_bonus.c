/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alva <sde-alva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 18:52:30 by sde-alva          #+#    #+#             */
/*   Updated: 2021/07/28 20:06:04 by sde-alva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if(*lst)
	{
		if ((*lst)->next)
			ft_lstclear(&((*lst)->next), (*del));	
		del((*lst)->content);
		free(*lst);
	}
	*lst = NULL;
}
