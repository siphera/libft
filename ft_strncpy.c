/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 04:37:53 by ssalman           #+#    #+#             */
/*   Updated: 2019/07/12 04:38:44 by ssalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	char *final;

	final = dest;
	while (*src != 0 && len > 0)
	{
		*dest++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*dest++ = 0;
		len--;
	}
	return (final);
}
