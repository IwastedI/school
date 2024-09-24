/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikellen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:51:34 by mikellen          #+#    #+#             */
/*   Updated: 2024/09/24 13:28:24 by mikellen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
    int *range;
    int size;
    int i = 0;

    size = ft_ultimate_range(&range, 5, 10);

    if (size == -1)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }

    while (i < size)
    {
        printf("%d\n", range[i]);
        i++;
    }

    free(range);

    return (0);
}*/
