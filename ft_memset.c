/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:30:34 by ssalman           #+#    #+#             */
/*   Updated: 2019/07/12 04:00:43 by ssalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	char *a;

	a = (char *)b;
	while (len > 0)
	{
		*a++ = (char)c;
		len--;
	}
	return (b);
}
