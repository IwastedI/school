/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:29:47 by fmol              #+#    #+#             */
/*   Updated: 2024/09/19 16:18:36 by fmol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
		if (f(tab[i++]))
			count++;
	return (count);
}
/*
int	is_even(char *str)
{
	int i = 0;
	while (str[i++]);
	return (i % 2 == 0 ? 1 : 0);
}
#include <stdio.h>
int main(void)
{
	char *strs[] = {"hello", "darkness", "myp", "old", "friend"};
	printf("result: %d\n", ft_count_if(strs, 5, is_even));
}*/
