/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 04:52:51 by ssalman           #+#    #+#             */
/*   Updated: 2019/07/12 04:52:55 by ssalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	i = 0;
	if (*needle == 0)
		return ((char*)haystack);
	while (haystack[i] != 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != 0)
			j++;
		if (j == ft_strlen(needle))
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
