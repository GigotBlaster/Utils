/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetitpi <npetitpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:58:08 by npetitpi          #+#    #+#             */
/*   Updated: 2023/01/05 13:23:22 by npetitpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../x_includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = ft_strlen((char *)s);
	dest = malloc(sizeof(char) * (len +1));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
