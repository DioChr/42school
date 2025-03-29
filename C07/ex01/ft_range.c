/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:04:03 by dchrysik          #+#    #+#             */
/*   Updated: 2024/03/07 18:30:13 by dchrysik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	j;

	if (min >= max)
		return (0);
	range = malloc (sizeof(int) * (max - min));
	i = min;
	j = 0;
	while (i < max)
	{
		range[j] = i;
		i++;
		j++;
	}
	return (range);
}
/*
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main() 
{
    int *range1 = ft_range(3, 8);
    if (range1 == NULL) {
        printf("Memory allocation failed for range1!\n");
        return 1;
    }
    printf("Range 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", range1[i]);
    }
    printf("\n");
    free(range1);

    int *range2 = ft_range(10, 3);
    if (range2 == NULL) {
        printf("Memory allocation failed for range2!\n");
     
    }
    printf("Range 2: ");
    if (range2 == 0) {
        printf("(empty)\n");
    }
    free(range2);

    int *range3 = ft_range(-5, 5);
    if (range3 == NULL) {
        printf("Memory allocation failed for range3!\n");
        return 1;
    }
    printf("Range 3: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", range3[i]);
    }
    printf("\n");
    free(range3);

    return 0;
}
*/
