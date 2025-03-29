/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 22:23:24 by dchrysik          #+#    #+#             */
/*   Updated: 2024/02/29 22:45:43 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	destlen;

	destlen = 0;
	while (dest[destlen])
	{
		destlen++;
	}
	i = 0;
	while (src[i] && i < nb)
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
