/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 05:24:36 by ssalman           #+#    #+#             */
/*   Updated: 2019/07/12 05:26:55 by ssalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*out;
	char		*str;
	char const	*src;

	if (s)
	{
		str = ft_strnew(len);
		out = str;
		src = &s[start];
		if (str)
		{
			while (*src != 0 && len > 0)
			{
				*str++ = *src++;
				len--;
			}
			return (out);
		}
		else
		{
			return (NULL);
		}
	}
	else
		return (NULL);
}
