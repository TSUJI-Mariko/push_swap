/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:52:38 by mtsuji            #+#    #+#             */
/*   Updated: 2022/01/12 12:35:31 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(s_stack **stack)
{
	if ((*stack)->num < (*stack)->next->num &&
		(*stack)->next->num < (*stack)->next->next->num)
			return ;
	else if ((*stack)->num > (*stack)->next->num &&
		(*stack)->next->num < (*stack)->next->next->num)
			ft_pustr("sa\n");
	else if ((*stack)->num > (*stack)->next->num &&
		(*stack)->next->num < (*stack)->next->next->num)
			ft_putstr("ra\n");
	else if ((*stack)->num < (*stack)->next->num &&
		(*stack)->next->num > (*stack)->next->next->num &&
		(*stack)->num > (*stack)->next->next->num)
			ft_putstr("rra\n");
	else if ((*stack)->num < (*stack)->next->num &&
		(*stack)->next->num > (*stack)->next->next->num &&
		(*stack)->num < (*stack)->next->next-num)
			ft_putstr("sa\nra\n");
	else if ((*stack)->num > (*stack)->next->num &&
		(*stack)->next->num > (*stack)->next->next->num &&
			ft_putstr("sa\nrra\n");
}
/*
 *(*stack)->num             = 1ere position
 *(*stack)->next->num       = 2eme position 
 *(*stack)->next->next->num = 3eme position
 */

void	short_sort(s_stack **stack, int len)
{
	if (len == 1)
		return ;
	if (len == 2 && (*stack)->num > (*stack)->next)
	{
		ft_putstr("sa\n");
	}
	if (len == 3)
		sort_three(stack)
}

