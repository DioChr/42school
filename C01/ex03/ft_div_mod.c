/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <dchrysik@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:43:51 by dchrysik          #+#    #+#             */
/*   Updated: 2024/02/22 23:25:39 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int main()
{
	int x;
	int y;
	int prod;
	int rem;
	int *div;
	int *mod;
	
	x = 15;
	y = 2;
	div = &prod;
	mod = &rem;
	ft_div_mod(x, y, div, mod);
}
*/
