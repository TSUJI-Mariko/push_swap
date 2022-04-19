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

void    global_sort(t_stacks *stacks)
{
    first_big_sort(stacks);
}

void    first_big_sort(t_stacks *stacks)
{
  while (stacks->count_a > (stacks->count_a / 2))
    {
        if (stacks->a->data > stacks->med)
        {
            pb(stacks, 1);
            stacks->count_a += 1;
            stacks->count_b -= 1;
        }
        else 
            ra(&stacks->a, 1);
    }
}

void    mark_up_stack(t_stacks *stacks)
{
    t_markup    *buff;
    int i;

    buff->data_b = stacks->b->data;
    buff->count_b = stacks->count_b;
    buff->min = stacks->b->data;
    buff->max = buff->data_b - 1;
    buff->med = buff->max / 2;



}