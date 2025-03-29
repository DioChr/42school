/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <dchrysik@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:45:03 by dchrysik          #+#    #+#             */
/*   Updated: 2024/02/21 22:17:46 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(int c)
{
	c += 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a / 10);
			ft_print(a % 10);
			write(1, " ", 1);
			ft_print(b / 10);
			ft_print(b % 10);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
