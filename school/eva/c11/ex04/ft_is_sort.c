/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:41:53 by fmol              #+#    #+#             */
/*   Updated: 2024/09/19 16:19:48 by fmol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	check_order(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (!result && i < length - 1)
	{
		result = f(tab[i], tab[i + 1]);
		i++;
	}
	return (result <= 0);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	bool	ascending;
	int		i;

	if (length <= 1)
		return (1);
	i = 0;
	ascending = true;
	if (!check_order(tab, length, f))
		ascending = false;
	while (i < length - 1)
	{
		if (ascending && f(tab[i], tab[i + 1]) > 0)
			return (0);
		if (!ascending && f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int cmp(int x, int y)
{
	return (x - y);
}
#include <stdio.h>
int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int arr2[] = {6, 5, 4, 3, 2, 1};
	int arr3[] = {1, 1, 2, 2, 3, 4};
	int arr4[] = {4, 4, 3, 2, 1, 1};
	int arr5[] = {4, 4, 3, 4, 5, 6};
	int arr6[] = {1, 2, 3, 4, 3, 2};
	printf("test %d: %s\n", 1, ft_is_sort(arr, 6, cmp) == 1 ? "SUCCESS" : "FAIL");
	printf("test %d: %s\n", 2, ft_is_sort(arr2, 6, cmp) == 1 ? "SUCCESS" : "FAIL");
	printf("test %d: %s\n", 3, ft_is_sort(arr3, 6, cmp) == 1 ? "SUCCESS" : "FAIL");
	printf("test %d: %s\n", 4, ft_is_sort(arr4, 6, cmp) == 1 ? "SUCCESS" : "FAIL");
	printf("test %d: %s\n", 5, ft_is_sort(arr5, 6, cmp) == 0 ? "SUCCESS" : "FAIL");
	printf("test %d: %s\n", 6, ft_is_sort(arr6, 6, cmp) == 0 ? "SUCCESS" : "FAIL");
}*/
