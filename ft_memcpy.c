/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athekkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:32:08 by athekkan          #+#    #+#             */
/*   Updated: 2023/02/06 20:19:45 by athekkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*altdst;
	unsigned char	*altsrc;

	i = 0;
	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;
	while (n > 0 && dst != src)
	{
		altdst[i] = altsrc[i];
		i++;
		n--;
	}
	return (dst);
}
