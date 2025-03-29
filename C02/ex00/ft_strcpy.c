/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik < dchrysik@student.42vienna.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:15:57 by dchrysik          #+#    #+#             */
/*   Updated: 2024/02/29 19:54:41 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char *a;
	char b[20];
	char *c;

	a = "abcdez";
	c = ft_strcpy(b,a);
	printf("%s",c);
	
}*/
