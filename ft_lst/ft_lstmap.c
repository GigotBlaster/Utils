/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetitpi <npetitpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:55:05 by npetitpi          #+#    #+#             */
/*   Updated: 2023/01/05 13:24:25 by npetitpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../x_includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tampon;
	t_list	*newlst;

	if (!lst || !f || !del)
		return (NULL);
	newlst = 0;
	while (lst)
	{
		tampon = ft_lstnew((*f)(lst->content));
		if (!tampon)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, tampon);
		tampon = tampon->next;
		lst = lst->next;
	}
	return (newlst);
}
