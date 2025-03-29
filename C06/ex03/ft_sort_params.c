/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:47:23 by dchrysik          #+#    #+#             */
/*   Updated: 2024/03/07 13:06:30 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(char *s1, char *s2)
{
	char *temp;

	temp = "";
	*temp = s1[0];
	*s1 = s2[0];
	*s2 = temp[0];

}

int	ft_strcmp(char *s1, char *s2)
{
	int	difference;
	int	i;

	i = 0;
	if (s1[i] == 0 && s2[i] == 0)
	{
		return (0);
	}
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	difference = s1[i] - s2[i];
	return (difference);
}
/*
void	ft_print_arg(int argc, char **argv)
{
	int	i;
	int j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
*/
int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc;
	while (i - 1 > 0)
	{
		j = 1;
		while (argv[j] && j <= i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) < 0)
			{
				ft_swap(argv[j], argv[j+1]);
			}
			j++;
		}
		i--;
	}
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

