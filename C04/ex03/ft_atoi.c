/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:50:35 by dchrysik          #+#    #+#             */
/*   Updated: 2024/03/05 13:11:12 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	multiplier;
	int	temp;

	number = 0;
	multiplier = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			multiplier *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		temp = str[i] - 48;
		number = number * 10 + temp;
		i++;
	}
	number *= multiplier;
	return (number);
}
