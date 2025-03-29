/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 19:19:12 by dchrysik          #+#    #+#             */
/*   Updated: 2024/03/02 21:47:49 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_printable(char str)
{
	if (str < 32 || str == 127)
		return (1);
	else
		return (0);
}

void	ft_print(char str)
{
	int		non_print;
	char	first_dig;
	char	second_dig;

	non_print = ft_char_is_printable(str);
	if (non_print == 1)
	{
		write(1, "\\", 1);
		if (str == 127)
			write(1, "7f", 2);
		else
		{
			first_dig = (str / 16) + 48;
			second_dig = str % 16;
			if (second_dig < 10)
				second_dig += 48;
			else
				second_dig += 87;
			write(1, &first_dig, 1);
			write(1, &second_dig, 1);
		}
		non_print = 0;
	}
	else
		write (1, &str, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_print(str[i]);
		i++;
	}
}
/*
int main()
{
	char *a;

	a = "C\ro\tucou\ntu va\as bi\ven ?";
	ft_putstr_non_printable(a);
}
*/
