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

void	ft_ra(t_stack **a, int i)
{
	t_stack	*first;
	t_stack	*last;
	
	if (*a == NULL)
		return ;
	first = *a;
	*a = (*a)->next;
	last = *a;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	if (i == 1)
		ft_putendl_fd("ra", 1);
}

void	ft_rb(t_stack **b, int i)
{
	t_stack	*first;
	t_stack	*last;

	if (*b == NULL)
		return ;
	first = *b;
	*b = (*b)->next;
	last = *b;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	if (i == 1)
		ft_putendl_fd("rb", 1);
}
/*
void	ft_rr(t_stacks **stack, int i)
{
	ft_ra((*stack)->a, 0);
	ft_rb((*stack)->b, 0);
	if (i == 1)
		ft_putendl_fd("rr", 1);
}
*/
void	rra(t_stack **a, int i)
{
	t_stack	*last;
	t_stack	*prev;

	if (*a == NULL)
		return ;
	last = *a;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	last->next = *a;
	prev->next = NULL;
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
/*
void	ft_rrr(t_stack **stack, int i)
{
	ft_rra((*stack)->a, 0);
	ft_rrb((*stack)->b, 0);
	if (i == 1)
		ft_putendl_fd("rrr", 1);
}
*/
/*
void	ft_sa(t_stack **a, int i)
{
	t_stack	*temp;

	if (*a != NULL && (*a)->next != NULL)
	{
		temp = (*a)->num;
		(*a)->num = (*a)->next->num;
		(*a)->next->num = temp;
	}
	if (i == 1)
		ft_putendl_fd("sa", 1);
}

void	ft_sb(t_stack **b, int i)
{
	t_stack	*temp;

	if (*b != NULL && (*b)->next != NULL)
	{
		temp = (*b)->num;
		(*b)->num = (*b)->next->num;
		(*b)->next->num = temp;
	}
	if (i == 1)
		ft_putendl_fd("sb", 1);
}

void	ft_ss(t_stacks **stack, int i)
{
	ft_sa((*stack)->a, 0);
	ft_sb((*stack)->b, 0);
	if (i == 1)
		ft_putendl_fd("ss", 1);
}
*/
void	pa(t_stack **a, t_stack **b) //to = a, from = b;
{
	t_stack	*temp;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = *a;
	stack_b = *b;
	if (stack_b == NULL)
		return ;
	temp = stack_b;
	stack_b = stack_b->next;
	stack_a = *a;
	if (a == NULL)
	{
		stack_a = temp;
		stack_a->next = NULL;
		*a = stack_a;
	}
	else
	{
		temp->next = stack_a;
		*a = temp;
	}
}

//pbのコマンドの作り方を考えること

