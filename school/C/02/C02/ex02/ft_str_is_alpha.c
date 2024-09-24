/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-nutt <mde-nutt@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:43:52 by mde-nutt          #+#    #+#             */
/*   Updated: 2024/09/24 16:53:26 by mde-nutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	valid;

	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			valid = 1;
		else
		{
			valid = 0;
			break ;
		}
		str++;
	}
	return (valid);
}
