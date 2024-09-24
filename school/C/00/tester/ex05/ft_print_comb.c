/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nutt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:51:50 by mde-nutt          #+#    #+#             */
/*   Updated: 2024/09/22 11:52:37 by mde-nutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char value)
{
	write(1, &value, 1);
}

void	ft_result(char x, char y, char z)
{
	bool	last_char;

	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	last_char = !(x == '7' && y == '8' && z == '9');
	if (last_char)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_result(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
