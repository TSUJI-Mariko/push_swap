/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:04:41 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/09 13:04:44 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    stack_put_null(t_stacks *stacks, t_data *new)
{
    stacks->count_a = 0;
    stacks->count_b = 0;
    stacks->a = NULL;
    stacks->b = NULL;

    new->num = 0;
}
void stack_init(t_data *new, t_stacks *stacks)
{
    stacks->a = stack_create(new->a, new->num);
    stacks->b = NULL;
}

t_stack *stack_create(const int *buff, int count)
{
    t_stack *first_data;
    t_stack *new_list;
    int i;

    i = 0;
    new_list = (t_stack *)malloc(sizeof(t_stack));
    if (new_list == NULL)
        exit (1);
    first_data = new_list;
    while (i < count)
    {
        if (i < count -1)
        {
            new_list->next = (t_stack *)malloc(sizeof(t_stack));
	        if (new_list->next == NULL)
	        	exit(1);
        }
        new_list->data = buff[i];
        if (i == (count -1))
            new_list->next = NULL;
        else
            new_list = new_list->next;
        i++;
    }
    return (first_data);
}