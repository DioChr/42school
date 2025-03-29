/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 22:52:58 by dchrysik          #+#    #+#             */
/*   Updated: 2024/03/03 00:35:31 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (&str[i]);
	while (str[i])
	{
		j = 0;
		while ((to_find[j]) && str[i + j] && (to_find[j] == str[i + j]))
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char *a;
	char *b;
	
	a = "hello World";
	b = "ldo";
	printf("%s",ft_strstr(a,b));
}*/
