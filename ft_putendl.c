/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 05:38:19 by ssalman           #+#    #+#             */
/*   Updated: 2019/07/12 05:38:34 by ssalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char endline;

	if (s)
	{
		endline = '\n';
		while (*s != 0)
		{
			write(1, s, 1);
			s++;
		}
		write(1, &endline, 1);
	}
}