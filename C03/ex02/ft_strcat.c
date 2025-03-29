/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 22:00:25 by dchrysik          #+#    #+#             */
/*   Updated: 2024/02/29 22:19:31 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	destlen = 0;
	while (dest[destlen])
	{
		destlen++;
	}
	i = 0;
	while (src[i])
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
