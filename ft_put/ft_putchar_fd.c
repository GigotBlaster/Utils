/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetitpi <npetitpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:19:54 by npetitpi          #+#    #+#             */
/*   Updated: 2023/01/05 13:23:54 by npetitpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../x_includes/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
