/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:17:41 by dchrysik          #+#    #+#             */
/*   Updated: 2024/03/03 18:43:16 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	if (src[0] == '\0')
		return (0);
	src_size = 0;
	while (src[src_size])
		src_size++;
	if (size = 0)
		return (0);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}
/*
int main()
{
	char *a;
	char b[3];
	int c;
	int len;

	a = "dokimiextra";
	len = 0;
	c = ft_strlcpy(b,a,len);
	printf("%d", c);
	printf("%d",len);
	printf("%s",b);
}
*/
