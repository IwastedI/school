/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikellen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:30:51 by mikellen          #+#    #+#             */
/*   Updated: 2024/09/24 13:22:48 by mikellen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	static int	*tab;
	int			i;
	int			j;

	if (min >= max)
		return (0);
	tab = (int *)malloc((max - min) * sizeof(int));
	j = min;
	i = 0;
	while (j < max)
	{
		tab[i] = j;
		i++;
		j++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	int	*range = ft_range(4, 9);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", range[i]);
		i++;
	}
}*/
