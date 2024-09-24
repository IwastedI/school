/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:22:06 by fmol              #+#    #+#             */
/*   Updated: 2024/09/19 16:15:06 by fmol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	result = malloc(sizeof(int) * length);
	if (!result)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	add_one(int x)
{
	return (++x);
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *arr2 = ft_map(arr, 9, &add_one);
	for (int i = 0; i < 9; i++)
	{
		printf("%d\n", arr2[i]);
	}
}*/
