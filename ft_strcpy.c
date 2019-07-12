/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 04:34:57 by ssalman           #+#    #+#             */
/*   Updated: 2019/07/12 04:35:43 by ssalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char *final;

	final = dest;
	while (*src != 0)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (final);
}
