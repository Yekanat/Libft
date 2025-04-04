/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athekkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:13:48 by athekkan          #+#    #+#             */
/*   Updated: 2023/02/02 19:02:03 by athekkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*dst;
	char	*source;
	size_t	dslen;
	size_t	rest;

	dst = dest;
	source = (char *) src;
	rest = size;
	while (rest-- != 0 && *dst != '\0')
		dst++;
	dslen = dst - dest;
	rest = size - dslen;
	if (rest == 0)
		return (dslen + ft_strlen((char *) src));
	while (*src != '\0')
	{
		if (rest > 1)
		{
			*dst++ = *src;
			rest--;
		}
		src++;
	}
	*dst = '\0';
	return (dslen + (src - source));
}
