/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:37:57 by fmol              #+#    #+#             */
/*   Updated: 2024/09/19 16:17:12 by fmol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	while (*tab)
		if (f(*(tab++)))
			return (1);
	return (0);
}
/*
#include <stdio.h>

int	len_mod_2(char *str)
{
	int i =0;
	while(str[i])
		i++;
	return (i % 2 == 0 ? 1 : 0);
}

int	main(void)
{
	char *tab[] = {"hey", "hor", "har"};
	printf("result: %d\n", ft_any(tab, len_mod_2));
}*/
