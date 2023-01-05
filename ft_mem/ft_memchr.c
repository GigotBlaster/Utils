/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetitpi <npetitpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:05:34 by npetitpi          #+#    #+#             */
/*   Updated: 2023/01/05 13:24:06 by npetitpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../x_includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = ((char *)s);
	while (n > 0)
	{
		if (*str == (char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}
