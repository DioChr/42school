/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:35:11 by dchrysik          #+#    #+#             */
/*   Updated: 2024/03/07 18:02:24 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	dest = malloc(sizeof(char) * len);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *original_str = "Hello, world!";
    char *duplicate_str = strdup(original_str);

    if (duplicate_str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Original string: %s\n", original_str);
    printf("Duplicate string: %s\n", duplicate_str);
    free(duplicate_str);
    return 0;
}*/
