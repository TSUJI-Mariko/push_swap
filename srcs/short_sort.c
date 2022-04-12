/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:52:38 by mtsuji            #+#    #+#             */
/*   Updated: 2022/01/20 16:00:29 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_stacks *stacks)
{
	if (stacks->a->data < stacks->next->a->data &&
		stacks->next->a->data < stacks->next->next->a->data)
			return ;
	else if (stacks->a->data > stacks->next->a->data &&
		stacks->next->a->data < stacks->next->next->a->data)
		ft_putendl_fd("sa", 1);
	else if (stacks->a->data > stacks->next->a->data &&
		stacks->next->a->data < stacks->next->next->a->data)
		ft_putendl_fd("ra", 1);
	else if (stacks->a->data < stacks->next->a->data &&
		stacks->next->a->data > stacks->next->next->a->data &&
		stacks->a->data > stacks->next->next->a->data)
		ft_putendl_fd("rra", 1);
	else if (stacks->a->data < stacks->next->a->data &&
		stacks->next->a->data > stacks->next->next->a->data &&
		stacks->a->data < stacks->next->next->a->data)
	{
		ft_putendl_fd("sa", 1);
		ft_putendl_fd("ra", 1);
	}
	else if (stacks->a->data > stacks->next->a->data &&
		stacks->next->a->data > stacks->next->next->a->data &&
		stacks->a->data > stacks->next->next->a->data)
	{
		ft_putendl_fd("sa", 1);
		ft_putendl_fd("rra", 1);
	}
}
/*
 *(*stack)->num             = 1ere position
 *(*stack)->next->num       = 2eme position 
 *(*stack)->next->next->num = 3eme position
 */

void	short_sort(t_stacks *stacks, int len)
{
	if (len == 1)
		return ;
	if (len == 2 && stacks->a->data > stacks->next->a->data)
	{
		//ft_sa((*stack)->num, 1);
	}
	if (len == 3)
		sort_three(stacks);
}

