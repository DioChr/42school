/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <dchrysik@student.42vienna.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:09:58 by dchrysik          #+#    #+#             */
/*   Updated: 2024/02/26 23:16:07 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
