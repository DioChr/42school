/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 02:01:19 by dchrysik           #+#    #+#            */
/*   Updated: 2024/04/22 16:52:54 by dchrysik          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	dl;
	size_t	sl;

	sl = ft_strlen(src);
	if (!dst && size == 0)
		return (sl);
	dl = ft_strlen(dst);
	d = dl;
	if (size <= dl)
		return (size + sl);
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = '\0';
	return (dl + sl);
}
