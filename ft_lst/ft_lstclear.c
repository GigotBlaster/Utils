/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetitpi <npetitpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:28:44 by npetitpi          #+#    #+#             */
/*   Updated: 2023/01/05 13:24:35 by npetitpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../x_includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tampon;

	if (!lst || !del)
		return ;
	tampon = *lst;
	while (tampon)
	{
		*lst = (*lst)->next;
		ft_lstdelone(tampon, del);
		tampon = *lst;
	}
	*lst = NULL;
}
