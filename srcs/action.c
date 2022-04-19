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
/*
void	rr(t_stacks **stack, int i)
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
/*
void	rrr(t_stack **stack, int i)
{
	ft_rra((*stack)->a, 0);
	ft_rrb((*stack)->b, 0);
	if (i == 1)
		ft_putendl_fd("rrr", 1);
}
*/
/*
void	sa(t_stack **a, int i)
{
	t_stack	*temp;

	if (*a != NULL && (*a)->next != NULL)
	{
		temp = (*a)->num;
		temp = *a;
		(*a)->num = (*a)->next->num;
		(*a)->next->num = temp;
	}
	if (i == 1)
		ft_putendl_fd("sa", 1);
}
*/
void	sa(t_stack *a, int i)
{
	int	first;

	if (a == NULL)
		return;
	first = a->num;
	a->num = a->next->num;
	a->next->num = first;
	if (i == 1)
	ft_putendl_fd("sa", 1);

}

void	sb(t_stack *b, int i)
{
	int	first;

	if (b == NULL)
		return;
	first = b->num;
	b->num = b->next->num;
	b->next->num = first;
	if (i == 1)
	ft_putendl_fd("sb", 1);

}

void	ss(t_stacks *stack, int i)
{
	sa(stack->a, 0);
	sb(stack->b, 0);
	if (i == 1)
		ft_putendl_fd("ss", 1);
}
/*
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

void	pb(t_stack **a, t_stack **b) //to = b, from = a;
{
	t_stack	*temp;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = *a;
	stack_b = *b;
	if (stack_b == NULL)
		return ;
	temp = stack_a;
	stack_a = stack_a->next;
	stack_b = *b;
	if (b == NULL)
	{
		stack_b = temp;
		stack_b->next = NULL;
		*b = stack_b;
	}
	else
	{
		temp->next = stack_b;
		*b = temp;
	}
}
*/
void	pa(t_stacks *stacks, int i)
{
	t_stack *temp;

	if (stacks->b == NULL)
		return ;
	temp = stacks->b;
	stacks->b =stacks->b->next;
	temp->next = stacks->a;
	stacks->a = temp;
	stacks->count_a += 1;
	stacks->count_b -= 1;
	if (i == 1)
	 ft_putendl_fd("pa", 1);
}

void	pb(t_stacks *stacks, int i)
{
	t_stack *temp;

	if (stacks->a == NULL)
		return ;
	temp = stacks->a;
	stacks->a =stacks->a->next;
	temp->next = stacks->b;
	stacks->b = temp;
	stacks->count_b += 1;
	stacks->count_a -= 1;
	if (i == 1)
	 ft_putendl_fd("pb", 1);
}