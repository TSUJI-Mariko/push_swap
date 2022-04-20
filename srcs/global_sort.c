/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:13:36 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/18 17:13:38 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    big_sort(t_stacks *stacks)
{
    first_big_sort(stacks);

}

void    first_big_sort(t_stacks *stacks)
{
  while (stacks->count_a > (stacks->count_a / 2))
    {
        if (stacks->a->data < stacks->med)
            pb(stacks, 1);
        else 
            ra(&stacks->a, 1);
    }
}
/*
void    mark_up_stack_a(t_stacks *stacks)
{
    t_markup    *buff;
    int i;

    buff->count_a = stacks->count_a;
    buff->max = buff->count_a;
    buff->med = buff->max / 2;
    buff->quartre = buff->med / 2;
}*/

