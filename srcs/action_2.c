/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:26:36 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/23 16:50:21 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *a, int i)
{
	int	first;

	if (a == NULL)
		return ;
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
		return ;
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

void	pa(t_stacks *stacks, int i)
{
	t_stack	*temp;

	if (stacks->b == NULL)
		return ;
	temp = stacks->b;
	stacks->b = stacks->b->next;
	temp->next = stacks->a;
	stacks->a = temp;
	stacks->count_a += 1;
	stacks->count_b -= 1;
	if (i == 1)
		ft_putendl_fd("pa", 1);
}

void	pb(t_stacks *stacks, int i)
{
	t_stack	*temp;

	if (stacks->a == NULL)
		return ;
	temp = stacks->a;
	stacks->a = stacks->a->next;
	temp->next = stacks->b;
	stacks->b = temp;
	stacks->count_b += 1;
	stacks->count_a -= 1;
	if (i == 1)
		ft_putendl_fd("pb", 1);
}
