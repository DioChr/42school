/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:34:29 by dchrysik          #+#    #+#             */
/*   Updated: 2024/03/05 17:49:56 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	while (nb > 0)
	{
		res *= (nb);
		nb--;
	}
	return (res);
}
