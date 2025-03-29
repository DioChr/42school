/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 23:05:00 by dchrysik          #+#    #+#             */
/*   Updated: 2024/03/05 13:48:50 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	print;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write (1, "-", 1);
		nb *= -1;
	}
	while (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		print = nb + 48;
		write (1, &print, 1);
	}
}
/*
int main()
{
	int a;

	a = -2147483648;
	ft_putnbr(a);
}*/
