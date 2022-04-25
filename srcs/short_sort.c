/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:52:38 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/23 17:17:28 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_stacks *stacks)
{
	if (stacks->a->data < stacks->a->next->data
		&& stacks->a->next->data < stacks->a->next->next->data)
		return ;
	else if (stacks->a->data > stacks->a->next->data
		&& stacks->a->next->data < stacks->a->next->next->data
		&& stacks->a->data > stacks->a->next->next->data)
		ra(&stacks->a, 1);
	else if (stacks->a->data > stacks->a->next->data
		&& stacks->a->next->data < stacks->a->next->next->data
		&& stacks->a->data < stacks->a->next->next->data)
		sa(stacks->a, 1);
	else if (stacks->a->data < stacks->a->next->data
		&& stacks->a->next->data > stacks->a->next->next->data
		&& stacks->a->data > stacks->a->next->next->data)
		rra(&stacks->a, 1);
	else if (stacks->a->data < stacks->a->next->data
		&& stacks->a->next->data > stacks->a->next->next->data
		&& stacks->a->data < stacks->a->next->next->data)
		move_1(stacks);
	else if (stacks->a->data > stacks->a->next->data
		&& stacks->a->next->data > stacks->a->next->next->data
		&& stacks->a->data > stacks->a->next->next->data)
		move_2(stacks);
}

void	short_sort(t_stacks *stacks)
{
	if (stacks->count_a == 1)
		return ;
	if (stacks->count_a == 2
		&& stacks->a->data > stacks->a->next->data)
	{
		sa(stacks->a, 1);
	}
	if (stacks->count_a == 3)
		sort_three(stacks);
}

void	sort_5_elements(t_stacks *stacks)
{
	while (stacks->count_a > 3)
	{
		if (stacks->a->data == stacks->min
			|| stacks->a->data == stacks->max)
			pb(stacks, 1);
		else
			ra(&stacks->a, 1);
	}
	short_sort(stacks);
	pa(stacks, 1);
	pa(stacks, 1);
	if (stacks->a->data == stacks->max)
		ra(&stacks->a, 1);
	else
	{
		sa(stacks->a, 1);
		ra(&stacks->a, 1);
	}
}
