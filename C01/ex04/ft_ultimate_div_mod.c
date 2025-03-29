/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:31:19 by dchrysik          #+#    #+#             */
/*   Updated: 2024/02/22 23:49:03 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	u;

	u = (*a / *b);
	*b = (*a % *b);
	*a = u;
}
/*
int	main()
{
	int x;
	int y;
	int *a;
	int *b;
	
	x = 17;
	y = 3;
	a = &x;
	b = &y;
	ft_ultimate_div_mod(a,b);
	printf("%d, %d", x, y);
}
*/
