/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetitpi <npetitpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:30:52 by npetitpi          #+#    #+#             */
/*   Updated: 2023/01/05 13:21:01 by npetitpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../x_includes/get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *rest_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!rest_str)
	{
		rest_str = (char *)malloc(1 * sizeof(char));
		rest_str[0] = '\0';
	}
	if (!rest_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(rest_str) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (rest_str)
		while (rest_str[++i] != '\0')
			str[i] = rest_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(rest_str) + ft_strlen(buff)] = '\0';
	free(rest_str);
	return (str);
}

char	*ft_get_line(char *rest_str)
{
	int		i;
	char	*str;

	i = 0;
	if (!rest_str[i])
		return (NULL);
	while (rest_str[i] && rest_str[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (rest_str[i] && rest_str[i] != '\n')
	{
		str[i] = rest_str[i];
		i++;
	}
	if (rest_str[i] == '\n')
	{
		str[i] = rest_str[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_new_str(char *rest_str)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (rest_str[i] && rest_str[i] != '\n')
		i++;
	if (!rest_str[i])
	{
		free(rest_str);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) *(ft_strlen(rest_str) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (rest_str[i])
		str[j++] = rest_str[i++];
	str[j] = '\0';
	free(rest_str);
	return (str);
}
