/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:51:23 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/21 17:49:03 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	error_check(int argc, char **argv)
{
	int	i;
	int	valid;

	i = 1;
	valid = 0;
	while (i < argc)
	{
		if (check_spaces(argv[i]))
		{
			availavility(argv[i]);
			string_check(argv[i]);
			valid = 1;
		}
		i++;
	}
	return (valid);
}
/*
void	put_error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit (1);
}
*/

void	string_check(const char *str)
{
	size_t	i;
	int		sign;
	int		number;

	i = 0;
	sign = 0;
	number = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			number++;
		else if (str[i] == ' ' || str[i] == '\t')
		{
			if (sign != 0 && number == 0)
				put_error();
			number = 0;
			sign = 0;
		}
		else if ((str[i] == '+' || str[i] == '-')
			&& (sign == 0 && number == 0) && (str[i + 1] != '\0'))
			sign++;
		else
			put_error();
		i++;
	}
}
