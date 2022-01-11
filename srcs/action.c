/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:59:10 by mtsuji            #+#    #+#             */
/*   Updated: 2022/01/11 16:27:38 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_rab(t_stack **stack)
{
	s_stack	*first;
	s_stack	*last;

	if (*stack == NULL)
		return (0);
	first = *stack;
	*stack = (*stack)->next;
	last = *stack;
	while (last->next != NULL)
		last = last->next
	last->next = first;
	first->next = NULL;
	return (0);
}

int	rrab(t_stack **stack)
{
	s_stack	*last;
	s_stack	*prev;

	if (*stack == NULL)
		return (0);
	last = *stack;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	last->next = *stack;
	prev->next = NULL;
	return (0);
}

int	ft_sab(t_stack **stack)
{
	t_stack	*temp;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = (*stack)->num;
		(*stack)->num = (*stack)->next->num;
		(*stack)->next->num = temp;
	}
	return (0);
}

int	pab(t_stack **to, t_stack **from)
{
	t_stack	*temp;
	t_stack	*stack_to;
	t_stack	*stack_from;

	stack_to = *to;
	stack_from = *from;
	if (*stack_from == NULL)
		return (0);
	temp = stack_from;
	stack_from = stack_from->next;
	stack_to = *to;

	if (to == NULL)
	{
		stack_to = temp;
		stack_to->next = NULL;
		*to = stack_to;
	}
	else
	{
		temp->next = stack_to;
		*to = temp;
	return (0);
}


