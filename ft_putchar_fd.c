/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 05:40:37 by ssalman           #+#    #+#             */
/*   Updated: 2019/07/12 05:40:41 by ssalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char endline;

	if (s)
	{
		endline = '\n';
		while (*s != 0)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, &endline, 1);
	}
}
