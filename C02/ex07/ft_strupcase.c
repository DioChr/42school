/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:25:33 by dchrysik          #+#    #+#             */
/*   Updated: 2024/02/27 16:37:57 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char a[] = "DokiMi Re LeS n@ douleui";

	ft_strupcase(a);
	printf("%s",a);
}
*/
