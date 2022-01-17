/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:59:10 by mtsuji            #+#    #+#             */
/*   Updated: 2022/01/12 17:55:13 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_ra(t_stack **a, int i)
{
	t_stack	*first;
	t_stack	*last;
	
	if (*a == NULL)
		return (0);
	first = *a;
	*a = (*a)->next;
	last = *a;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	if (i == 1)
		ft_putstr("ra\n");
	return (0);
}

int	ft_rb(t_stack **b, int i)
{
	t_stack	*first;
	t_stack	*last;

	if (*b == NULL)
		return (0);
	first = *stack;
	*b = (*b)->next;
	last = *b;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	if (i == 1)
		ft_putstr("rb\n")
	return (0);
}

int	ft_rr(t_stacks **stack, int i)
{
	ft_ra(stack->a, 0);
	ft_rb(stack->b, 0);
	if (i == 1)
		ft_putstr("rr\n");
	return (0);

}

int	rra(t_stack **a, int i)
{
	t_stack	*last;
	t_stack	*prev;

	if (*a == NULL)
		return (0);
	last = *a;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	last->next = *a;
	prev->next = NULL;
	if (i == 1)
		ft_putstr("rra\n");
	return (0);
}

int	rrb(t_stack **b, int i)
{
	t_stack	*last;
	t_stack	*prev;

	if (*b == NULL)
		return (0);
	last = *b;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	last->next = *b;
	prev->next = NULL;
	if (i == 1)
		ft_putstr("rrb\n");
	return (0);
}

int	ft_rrr(t_stacks **stack, int i)
{
	ft_rra(stack->a, 0);
	ft_rrb(stack->b, 0);
	if (i == 1)
		ft_putstr("rrr\n");
	return (0);
}

int	ft_sa(t_stack **a, int i)
{
	t_stack	*temp;

	if (*a != NULL && (*a)->next != NULL)
	{
		temp = (*a)->num;
		(*a)->num = (*a)->next->num;
		(*a)->next->num = temp;
	}
	if (i == 1)
		ft_putstr("sa\n");
	return (0);
}

int	ft_sb(t_stack **b, int i)
{
	t_stack	*temp;

	if (*b != NULL && (*b)->next != NULL)
	{
		temp = (*b)->num;
		(*b)->num = (*b)->next->num;
		(*b)->next->num = temp;
	}
	if (i == 1)
		ft_putstr("sa\n");
	return (0);
}

int	ft_ss(t_stacks **stack, int i)
{
	ft_sa(stack->a, 0);
	ft_sb(stack->b, 0);
	if (i == 1)
		ft_putstr("ss\n");
	return (0);
}

int	pa(t_stack **a, t_stack **b) //to = a, from = b;
{
	t_stack	*temp;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = *a;
	stack_b = *b;
	if (*stack_b == NULL)
		return (0);
	temp = stack_b;
	stack_b = stack_b->next;
	stack_a = *a;
	if (to == NULL)
	{
		stack_a = temp;
		stack_a->next = NULL;
		*a = stack_a;
	}
	else
	{
		temp->next = stack_a;
		*a = temp;
	return (0);
}

//pbのコマンドの作り方を考えること

