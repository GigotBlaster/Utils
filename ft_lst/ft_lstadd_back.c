/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetitpi <npetitpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:02:22 by npetitpi          #+#    #+#             */
/*   Updated: 2023/01/05 13:24:47 by npetitpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../x_includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tampon;

	if (!*lst)
		*lst = new;
	else
	{
		tampon = ft_lstlast(*lst);
		tampon->next = new;
	}
}
