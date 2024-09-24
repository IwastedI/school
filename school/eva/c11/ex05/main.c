/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:57:55 by fmol              #+#    #+#             */
/*   Updated: 2024/09/19 16:30:21 by fmol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	add(int x, int y);
int	sub(int x, int y);
int	mul(int x, int y);
int	div(int x, int y);
int	mod(int x, int y);
int	ft_atoi(char *str);

void	putnbr(int x)
{
	char	c;

	if (x == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (x < 0)
	{
		write(1, "-", 1);
		x = -x;
	}
	if (x < 10)
	{
		c = ('0' + x);
		write(1, &c, 1);
		return ;
	}
	putnbr(x / 10);
	c = ('0' + (x % 10));
	write(1, &c, 1);
}

int	(*get_op(char op))(int x, int y)
{
	if (op == '+')
		return (&add);
	else if (op == '-')
		return (&sub);
	else if (op == '*')
		return (&mul);
	else if (op == '/')
		return (&div);
	else if (op == '%')
		return (&mod);
	else
		return (0);
}

char	convert_op_arg(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] && i < 3)
		i++;
	if (i > 1)
		return ('\0');
	if (str[0] != '+' && str[0] != '-' && str[0] != '*'
		&& str[0] != '/' && str[0] != '%')
		return ('\0');
	return (str[0]);
}

int	check_exceptions(char op, int y)
{
	if (!op)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if ((op == '/' || op == '%') && y == 0)
	{
		if (op == '%')
			write(1, "Stop : modulo by zero\n", 22);
		if (op == '/')
			write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int		x;
	int		y;
	int		(*op)(int, int);

	if (argc != 4)
		return (1);
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[3]);
	if (!check_exceptions(convert_op_arg(argv[2]), y))
		return (1);
	op = get_op(convert_op_arg(argv[2]));
	if (!op)
		return (1);
	putnbr(op(x, y));
	write(1, "\n", 1);
	return (0);
}
