/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetitpi <npetitpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:54:16 by npetitpi          #+#    #+#             */
/*   Updated: 2023/01/05 13:23:11 by npetitpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../x_includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		str = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!str)
			return (NULL);
		if (str)
			ft_strlcpy(str, &s1[start], end - start + 1);
	}
	return (str);
}

/*
int	main()
{
	char str[] = "ABCABCjfhrgbjcjd ABCjfioABC";
	char set[] = "ABC";
	printf("%s\n", ft_strtrim(str, set));
	return(0);
}*/