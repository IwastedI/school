/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:15:45 by fmol              #+#    #+#             */
/*   Updated: 2024/09/19 16:14:21 by fmol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	if (length < 0)
		return ;
	while (i < length)
		f(tab[i++]);
}
/*
#include <stdio.h>
void	print_int(int x)
{
	printf("%d\n", x);
}
int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	ft_foreach(arr, 7, &print_int);
}*/
