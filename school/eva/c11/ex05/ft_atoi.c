/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmol <fmol@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:41:39 by fmol              #+#    #+#             */
/*   Updated: 2024/09/10 18:32:39 by fmol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ignore_whitespace(char *str, unsigned int *i)
{
	while (true)
	{
		if (str[*i] == ' ' || (str[*i] >= '\t' && str[*i] <= '\r'))
			(*i)++;
		else
			break ;
	}
}

void	determine_sign(char *str, unsigned int *i, int *sign)
{
	while (true)
	{
		if (str[*i] == '+')
			(*i)++;
		else if (str[*i] == '-')
		{
			(*i)++;
			(*sign) = -(*sign);
		}
		else
			break ;
	}
}

int	calculate_int(char *str, unsigned int *i)
{
	int	result;

	result = 0;
	while (true)
	{
		if (str[*i] >= '0' && str[*i] <= '9')
		{
			result *= 10;
			result += (int)(str[*i] - '0');
		}
		else
			break ;
		(*i)++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	int				sign;

	i = 0;
	sign = 1;
	ignore_whitespace(str, &i);
	determine_sign(str, &i, &sign);
	return (sign * calculate_int(str, &i));
}
/*
#include <stdio.h>

int	main()
{
	printf("input: '++--++0000300', output: '%d'\n", ft_atoi("++--++0000300"));
	printf("input: 'aabb300', output: '%d'\n", ft_atoi("aabb300"));
	printf("input: '\\n---0.1', output: '%d'\n", ft_atoi("\n---0.1"));
	printf("input: ' \\n-3', output: '%d'\n", ft_atoi(" \n-3"));
	printf("input: '\\t++12', output: '%d'\n", ft_atoi("\t++12"));
	printf("input: '---120010K', output: '%d'\n", ft_atoi("---120010K"));
	printf("input: '\\t\\r\\v\\n  --+--+0123', output: '%d'\n", 
				ft_atoi("\t\r\v\n  --+--+0123"));
	printf("input: '    \\t\\r\\f +--+--++-1234.abd', output: '%d'", 
				ft_atoi("    \t\r\f +--+--++-1234.abd"));
}*/
