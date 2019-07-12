/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 04:12:04 by ssalman           #+#    #+#             */
/*   Updated: 2019/07/12 04:12:27 by ssalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *a;
	char *b;

	a = (char*)src;
	b = (char*)dst;
	if (a < b)
		while (len--)
		{
			b[len] = a[len];
		}
	else
		ft_memcpy(b, a, len);
	return (dst);
}
