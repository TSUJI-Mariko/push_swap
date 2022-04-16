/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:35:35 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/10 15:35:37 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    search_dup(const int *dup, int count)
{
    int i;

    i = 0;
    while (i != count) 
    {
        if(dup[i] == dup[i + 1])
            exit (1);
        i ++;
    }
}

void    duplicate_check(t_data *new, t_stacks *stacks)
{
    int *duplicate;
    duplicate = (int *)malloc(sizeof(int) * new->num);
    duplicate = intcpy(duplicate, new->a, new->num);  
    quicksort(duplicate, 0, new->num - 1); 
    search_dup(duplicate, new->num - 1);
    stacks->count_a = new->num;
    stacks->count_b = 0;
    stacks->min = duplicate[0];
    stacks->med = duplicate[new->num / 2];
    stacks->max = duplicate[new->num -1];
    free(duplicate);
}

int    *intcpy(int *dest, int *buff, int count)
{
    int i;
    
    i = 0;
    while (i < count)
    {
        dest[i] = buff[i];
        i++;
    }
    return (dest);
}