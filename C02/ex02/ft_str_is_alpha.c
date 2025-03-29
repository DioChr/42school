/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik < dchrysik@student.42vienna.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:15:54 by dchrysik          #+#    #+#             */
/*   Updated: 2024/02/26 23:00:19 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	char *c;
	int x;

	c = "asdefASDYBAasdEG";
	x = ft_str_is_alpha(c);
	printf("%d", x);
}
*/
