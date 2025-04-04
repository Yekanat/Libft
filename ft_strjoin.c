/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athekkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:29:14 by athekkan          #+#    #+#             */
/*   Updated: 2023/02/10 17:29:30 by athekkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	buffer;
	size_t	i;
	char	*ptr;

	i = 0;
	if (NULL == s1 || NULL == s2)
		return (NULL);
	buffer = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(buffer);
	if (NULL == ptr)
		return (NULL);
	while (*s1)
		*(ptr + i++) = *s1++;
	while (*s2)
		*(ptr + i++) = *s2++;
	*(ptr + i) = '\0';
	return (ptr);
}
