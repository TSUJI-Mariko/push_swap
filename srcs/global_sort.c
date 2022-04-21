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
/*
void    big_sort(t_stacks *stacks)
{
    t_markup   *step;

    //first_big_sort(stacks);
    find_mid_value_a(stacks);
    find_mid_value_b(stacks);

    sort_a(stacks);
    sort_b(stacks);

    //if ()

}
*/
/*
void    first_big_sort(t_stacks *stacks)
{
  while (stacks->count_a > (stacks->count_a / 2))
    {
        if (stacks->a->data < stacks->med)
            pb(stacks, 1);
        else 
            ra(&stacks->a, 1);
    }
}*/
/*
void	sort_a(t_stacks *stacks)
{
    t_markup    *steps;
    int i;

    i = 2;
    quicksort(&stacks->a->data, steps->min_a, steps->max_a);
    while (stacks->count_a > (stacks->count_a / 2))
    {   
        if (stacks->a->data < steps->med_a)
            pb(stacks, 1);
        else 
            ra(&stacks->a, 1);
    }
}

void    sort_b(t_stacks *stacks)
{
    t_markup    *steps;
    int i;

    i = 2;
    quicksort(&stacks->b->data, steps->min_b, steps->max_b);
    while (stacks->count_b > (stacks->count_b / 2))
    {   
        if (stacks->b->data < stacks->med)
            pa(stacks, 1);
        else 
            rb(&stacks->a, 1);
    }
}


void    find_mid_value_b(t_stacks *stacks)
{
    t_markup    *step;
    int *buff;

    buff = (int *)malloc(sizeof(int) * stacks->count_b);
    buff = intcpy(buff, &stacks->b->data, stacks->count_b);
    quicksort(buff, 0, stacks->count_b);
    step->min_b = buff[0];
    step->max_b = buff[stacks->b->data];
    step->med_b = buff[stacks->b->data / 2];
    free(buff);
}

void    find_mid_value_a(t_stacks *stacks)
{
    t_markup    *step;
    int *buff;

    buff = (int *)malloc(sizeof(int) * stacks->count_a);
    buff = intcpy(buff, &stacks->b->data, stacks->count_a);
    quicksort(buff, 0, stacks->count_a);
    step->min_a = buff[0];
    step->max_a = buff[stacks->a->data];
    step->med_a = buff[stacks->a->data / 2];
    free(buff);
}
*/


