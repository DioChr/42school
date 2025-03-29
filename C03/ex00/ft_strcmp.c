/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:35:03 by dchrysik          #+#    #+#             */
/*   Updated: 2024/02/28 19:58:23 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	difference;
	int	i;

	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
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
int main()
{
	char *a;
	char *b;
	int result;

	a = "ABc";
	b = "ABcd";
	result = ft_strcmp(a, b);
	printf ("%d", result);
}*/
