/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:50:11 by dchrysik           #+#    #+#            */
/*   Updated: 2024/05/03 22:49:34 by dchrysik          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	fulllen;
	size_t	restlen;

	if (!s)
		return (NULL);
	fulllen = ft_strlen(s);
	if (start >= fulllen)
	{
		new = (char *)malloc(sizeof(char));
		if (!new)
			return (NULL);
		*new = '\0';
		return (new);
	}
	restlen = fulllen - start;
	if (restlen > len)
		restlen = len;
	new = (char *)malloc(sizeof(char) * (restlen + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s + start, restlen + 1);
	return (new);
}
