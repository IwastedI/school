/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikellen <mikellen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:42:25 by mikellen          #+#    #+#             */
/*   Updated: 2024/09/24 13:30:22 by mikellen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strslen(int size, char **strs, char *sep)
{
	int	len;
	int	sep_len;
	int	i;

	len = 0;
	sep_len = 0;
	while (sep[sep_len])
		sep_len++;
	while (size > 0)
	{
		i = 0;
		while (strs[size - 1][i])
		{
			i++;
			len++;
		}
		if ((size - 1) > 0)
			len += sep_len;
		size--;
	}
	return (len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		j;
	int		index;

	i = 0;
	index = -1;
	ptr = malloc(ft_strslen(size, strs, sep) * sizeof(char));
	while (size > ++index)
	{
		j = -1;
		while (strs[index][++j])
		{
			ptr[i] = strs[index][j];
			i++;
		}
		j = -1;
		while (sep[++j] && (size - 1) > index)
		{
			ptr[i] = sep[j];
			i++;
		}
	}
	ptr[i] = 0;
	return (ptr);
}
/*
#include <stdio.h>

int main(void)
{
    char *strs[] = {"Hello", "World", "Test"};
    char *sep = ", ";
    int size = 3;

    char *result = ft_strjoin(size, strs, sep);
    printf("%s\n", result);
    
    free(result);
    return 0;
}*/
