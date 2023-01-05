/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetitpi <npetitpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:36:44 by npetitpi          #+#    #+#             */
/*   Updated: 2023/01/05 13:23:41 by npetitpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../x_includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = ((char *)s);
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
