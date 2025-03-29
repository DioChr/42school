/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:22:38 by dchrysik          #+#    #+#             */
/*   Updated: 2024/03/06 17:11:31 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power >= 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}
