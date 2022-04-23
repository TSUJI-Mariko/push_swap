/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:01:43 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/23 17:06:06 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	nb_byte(t_stacks *stacks)
{
	int	i;

	i = 0;
	while ((stacks->count_a >> i) != 0)
		i++;
	return (i);
}

void	radix_sort(t_stacks *stacks)
{
	int	max_bits;
	int	i;
	int	j;
	int	num;
	int	size;

	max_bits = nb_byte(stacks);
	size = stacks->count_a;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = stacks->a->step;
			if (((num >> i) & 1) == 1)
				ra(&stacks->a, 1);
			else
				pb(stacks, 1);
			j++;
		}
		while (stacks->count_b > 0)
			pa(stacks, 1);
		i++;
	}
}
