/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nutt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:57:58 by mde-nutt          #+#    #+#             */
/*   Updated: 2024/09/22 12:14:47 by mde-nutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rec(int prev, int n, int length, char array[10])
{
	int	i;

	if (n == length)
	{
		write(1, array, length);
		write(1, ", ", 2);
		return ;
	}
	if (prev == 9)
		return ;
	i = prev;
	while (++i <= 10 - length + n)
	{
		array[n] = '0' + i;
		rec(i, n + 1, length, array);
	}
}

void	print_last(int i)
{
	char	c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	char	array[10];
	int	i;

	i = 0;
	while (i < 10 - n)
	{
		array[0] = '0' + i;
		rec(i++, 1, n, array);
	}
	print_last(i);
}
