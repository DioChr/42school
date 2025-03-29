/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:39:11 by dchrysik          #+#    #+#             */
/*   Updated: 2024/03/02 17:46:38 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_up2lo_lo2up(char str, int space)
{
	if (space == 1)
	{
		if (str >= 97 && str <= 122)
		{
			str -= 32;
		}
	}
	else
	{
		if (str >= 65 && str <= 90)
		{
			str += 32;
		}
	}
	return (str);
}

int	ft_is_alphanumeric(char str)
{
	if (str >= 48 && str <= 57)
		return (0);
	else if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	space;

	i = 0;
	space = 1;
	while (str[i])
	{
		str[i] = ft_up2lo_lo2up(str[i], space);
		space = ft_is_alphanumeric(str[i]);
		i++;
	}
	return (str);
}
/*
int main()
{
	char b[]= "salut, comment tu vas ? 42mot @quarante-deux; cinquante+et+un";

	ft_strcapitalize(b);
	printf("%s",b);
}
*/
