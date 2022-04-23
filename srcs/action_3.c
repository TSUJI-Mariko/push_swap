/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:33:52 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/23 17:20:34 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack **a, int i)
{
	t_stack	*last;
	t_stack	*prev;
	t_stack	*list;

	if (*a == NULL)
		return ;
	prev = *a;
	last = (*a)->next;
	list = *a;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	last->next = NULL;
	last = prev->next;
	*a = list;
	if (i == 1)
		ft_putendl_fd("rra", 1);
}

void	rrb(t_stack **b, int i)
{
	t_stack	*last;
	t_stack	*prev;

	if (*b == NULL)
		return ;
	last = *b;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	last->next = *b;
	prev->next = NULL;
	if (i == 1)
		ft_putendl_fd("rrb", 1);
}

void	move_1(t_stacks *stacks)
{
	sa(stacks->a, 1);
	ra(&stacks->a, 1);
}

void	move_2(t_stacks *stacks)
{
	sa(stacks->a, 1);
	rra(&stacks->a, 1);
}
