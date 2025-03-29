/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 23:22:28 by dchrysik          #+#    #+#             */
/*   Updated: 2024/03/05 23:45:33 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (nb % i != 0 && i < nb)
	{
		i += 2;
	}
	if (i == nb)
		return (1);
	else
		return (0);
}
/*
int main()
{
	printf("%d\n",ft_is_prime(79));
}*/
