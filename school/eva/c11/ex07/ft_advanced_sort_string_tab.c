/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:56:33 by fmol              #+#    #+#             */
/*   Updated: 2024/09/19 16:54:35 by fmol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1

int	partition(char **arr, int low, int high, int (*cmp)(char *s1, char *s2))
{
	char	*pivot;
	char	*tmp;

	pivot = arr[high];
	while (low < high)
	{
		while (cmp(arr[low], pivot) < 0)
			low++;
		while (cmp(arr[high], pivot) > 0)
			high--;
		if (low >= high)
			break ;
		tmp = arr[high];
		arr[high] = arr[low];
		arr[low] = tmp;
	}
	tmp = arr[high];
	arr[high] = arr[low];
	arr[low] = tmp;
	return (low);
}

void	quicksort(char **arr, int low, int high, int (*cmp)(char *s1, char *s2))
{
	int	pivot_pos;

	if (low >= high)
		return ;
	pivot_pos = partition(arr, low, high, cmp);
	quicksort(arr, low, pivot_pos - 1, cmp);
	quicksort(arr, pivot_pos + 1, high, cmp);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *s1, char *s2))
{
	int	len;

	len = 0;
	while (tab[len])
		len++;
	quicksort(tab, 0, len - 1, cmp);
}
/*
#include <stdio.h>
void	print_array(char **arr)
{
	int	len = 0;
	int	i = 0;
	while (arr[len])
		len++;
	printf("{");
	while(i < len - 1)
	{
		printf("%s, ", arr[i]);
		i++;
	}
	printf("%s}\n", arr[i]);
}
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (TRUE)
	{
		if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
}
int	main(void)
{
	char *strs[] = {"Hello", "apple", "breakfest", 
		"breakfast", "slow", "Hero", "Peace"};
	print_array(strs);
	ft_sort_string_tab(strs, &ft_strcmp);
	print_array(strs);
}*/
