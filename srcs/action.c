/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:59:10 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/23 16:48:32 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack **a, int i)
{
	t_stack	*list;
	t_stack	*first;
	t_stack	*last;

	if (*a == NULL)
		return ;
	list = *a;
	first = (*a)->next;
	last = *a;
	while (last->next != NULL)
		last = last->next;
	list->next = NULL;
	last->next = list;
	*a = first;
	if (i == 1)
		ft_putendl_fd("ra", 1);
}

void	rb(t_stack **b, int i)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*list;

	if (*b == NULL)
		return ;
	list = *b;
	first = (*b)->next;
	last = *b;
	while (last->next != NULL)
		last = last->next;
	list->next = NULL;
	last->next = list;
	*b = first;
	if (i == 1)
		ft_putendl_fd("rb", 1);
}

void	rr(t_stacks *stack, int i)
{
	ra(&stack->a, 0);
	rb(&stack->b, 0);
	if (i == 1)
		ft_putendl_fd("rr", 1);
}
