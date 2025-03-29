/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <dchrysik@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:42:26 by dchrysik          #+#    #+#             */
/*   Updated: 2024/02/19 21:46:51 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}
/*
int main()
{
	ft_print_numbers();
}
*/
