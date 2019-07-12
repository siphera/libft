/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 04:44:48 by ssalman           #+#    #+#             */
/*   Updated: 2019/07/12 04:44:52 by ssalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *original;

	original = s1;
	s1 = &s1[ft_strlen(s1)];
	while (*s2 != 0 && n > 0)
	{
		*s1++ = *s2++;
		n--;
	}
	*s1 = 0;
	return (original);
}
