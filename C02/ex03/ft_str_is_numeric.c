/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik < dchrysik@student.42vienna.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:01:41 by dchrysik          #+#    #+#             */
/*   Updated: 2024/02/26 23:09:16 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (*str == '\0')
		return (1);
	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
